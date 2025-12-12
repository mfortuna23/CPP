/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:11:06 by mfortuna          #+#    #+#             */
/*   Updated: 2025/12/12 10:55:41 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::ifstream *file){
	// read file, storage no error handle
	std::string buffer;
	if (!getline(*file, buffer))
		return ;
	while(getline(*file, buffer)){
		if (buffer.size() == 0)
			continue ;
		data storage;
		storage.year = -1; storage.month = -1; storage.day = -1; storage.value = -1;
		std::string date = buffer.substr(0, 10);
		sscanf(buffer.c_str(), "%d-%d-%d,%f", &storage.year, &storage.month, &storage.day, &storage.value);
		btc.insert(std::make_pair(date, storage));
	}
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	*this = other;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
	btc = other.btc;
	return *this;
}

int checkValues(const data *storage){
	if (storage->month < 0 || storage->month > 12)
		return 0;
	if (storage->day > 28){
		if (storage->month == 2)
			if (storage->day > 29 || storage->year % 4 != 0)
				return 0;
		if (storage->day > 30)
			if (storage->month == 4 || storage->month == 6 || storage->month == 9 || storage->month == 11)
				return 0;
		if (storage->day > 31)
			return 0;
	}
	if (storage->value < 0)
		return 1;
	if (storage->value > 1000)
		return 2;
	return 42;
}

bool isnumber(char c){
	if (c >= '0' && c <= '9')
		return true;
	return false;
}

bool isNum(std::string num){
	for (size_t i = 0; i < num.size(); i++){
		if (!isnumber(num[i])){
			if (i != 0 && num[i] != '-')
				return false;
		}}
	return true;
}
bool isFloat(std::string num){
	int dot = 0;
	for (size_t i = 0; i < num.size(); i++){
		if (!isnumber(num[i]) && num[i] != '.'){
			if (i != 0 && num[i] != '-')
				return false;
			}
		if (num[i] == '.')
			dot++;
	}
	if (dot > 1)
		return false;
	return true;
}

void BitcoinExchange::getValues(std::string buffer, data &storage){
	std::string elem;
	std::stringstream buf(buffer);
	getline(buf, elem, '-'); //year
	if (elem.size() != 4 || !isNum(elem))
		throw WrongDate(buffer);
	storage.year = std::atoi(elem.c_str());
	getline(buf, elem, '-'); //month
	if (elem.size() != 2 || !isNum(elem))
		throw WrongDate(buffer);
	storage.month = std::atoi(elem.c_str());
	getline(buf, elem, ' '); //day
	if (elem.size() != 2 || !isNum(elem))
		throw WrongDate(buffer);
	storage.day = std::atoi(elem.c_str());
	buf >> elem;
	if (elem.size() != 1 || elem[0] != '|')
		throw WrongDate(buffer);
	buf >> elem;
	if (elem.size() == 0 || !isFloat(elem))
		throw WrongDate(buffer);
	storage.value = std::atof(elem.c_str());
	elem.clear();
	getline(buf, elem);
	if (!elem.empty())	
		throw WrongDate(buffer);
}

void BitcoinExchange::printExchange(std::ifstream *wallet){
	if (btc.begin() == btc.end()){
		//std::cout << "Error: data.csv is empty\n";
		return ;
	}
	std::string buffer;
	getline(*wallet, buffer);
	while(getline(*wallet, buffer)){
		if (buffer.size() == 0)
			continue ;
		data storage;
		storage.year = -1; storage.month = -1; storage.day = -1; storage.value = -1;
		try {
			std::string date = buffer.substr(0, 10);
			size_t dPos = buffer.find("|");
			if (dPos == std::string::npos)
				throw WrongDate(buffer);
			getValues(buffer, storage);
			int i = checkValues(&storage);
			switch (i){
				case 0:
					throw WrongDate(buffer);
				case 1:
					throw NegativeValue();
				case 2:
					throw LargeValue();
				default :
					std::map<std::string, data>::iterator btcIt = btc.end();
					btcIt--;
					while (btcIt->first > date && btcIt != btc.begin())
						btcIt--;
					if (btcIt == btc.begin())
						std::cout << date << " => " << storage.value << " = "<< 0 << std::endl;
					else
						std::cout << date << " => " << storage.value << " = "<< btcIt->second.value * storage.value << std::endl;
			}
		} 
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	
}
BitcoinExchange::WrongDate::WrongDate(std::string msg) : message("Error: bad input => " + msg) {}
const char *BitcoinExchange::WrongDate::what() const throw(){
	return message.c_str();
}
BitcoinExchange::WrongDate::~WrongDate() throw() {}

const char *BitcoinExchange::LargeValue::what() const throw(){
	return "Error: too large a number.";
}
const char *BitcoinExchange::NegativeValue::what() const throw(){
	return "Error: not a positive number.";
}

BitcoinExchange::~BitcoinExchange(){}