/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:11:06 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/13 15:29:19 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}


BitcoinExchange::BitcoinExchange(std::ifstream *file){
	// read file, storage no error handle
	std::string buffer;
	getline(*file, buffer); //first line does nothing
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
	if (storage->year > 2025 || storage->year < 1970)
		return 0;
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

void BitcoinExchange::printExchange(std::ifstream *wallet){
	std::string buffer;
	getline(*wallet, buffer); //first line does nothing
	while(getline(*wallet, buffer)){
		if (buffer.size() == 0)
			continue ;
		data storage;
		storage.year = -1; storage.month = -1; storage.day = -1; storage.value = -1;
		std::string date = buffer.substr(0, 10);
		sscanf(buffer.c_str(), "%d-%d-%d | %f", &storage.year, &storage.month, &storage.day, &storage.value);
		try {
			int i = checkValues(&storage);
			switch (i){
				case 0:
					throw WrongDate(date);
				case 1:
					throw NegativeValue();
				case 2:
					throw LargeValue();
				default :
					std::map<std::string, data>::iterator btcIt = btc.end();
					btcIt--;
					while (btcIt->first > date)
						btcIt--;
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