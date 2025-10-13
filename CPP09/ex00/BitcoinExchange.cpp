/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:11:06 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/10 15:59:43 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}


BitcoinExchange::BitcoinExchange(std::ifstream file){
	// read file, storage no error handle
	std::string buffer;
	getline(file, buffer); //first line does nothing
	while(getline(file, buffer)){
		data storage;
		storage.year = -1; storage.month = -1; storage.day = -1; storage.value = -1;
		std::string date = buffer.substr(0, 10);
		sscanf(buffer.c_str(), "%d-%d-%d,%d", &storage.year, &storage.month, &storage.day, &storage.value);
		// std::istringstream iss(buffer);
		std::string date = buffer.substr(0, 10);
		// getline(iss, buffer, ',');
		// storage.year = std::atoi(buffer.c_str());
		// getline(iss, buffer, ',');
		// storage.month = std::atoi(buffer.c_str());
		// getline(iss, buffer, ',');
		// storage.day = std::atoi(buffer.c_str());
		// getline(iss, buffer); //gets the rest
		// for (int i = 0; buffer[i]; i++){
		// 	if (buffer[i] >= '0' && buffer[i] <= '0')
		// 		storage.value = std::atof(buffer.c_str() + i);
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

	
	if (storage->value < 0)
		return 1;
	if (storage->value > 1000)
		return 2;
}

void BitcoinExchange::printExchange(const BitcoinExchange &wallet){
	std::map<std::string, data>::const_iterator it = wallet.btc.begin();
	while(it != wallet.btc.end()){
		try {
			int i = checkValues(&it->second);
			switch (i){
				case 0:
					throw WrongDate(it->first.c_str());
				case 1:
					throw NegativeValue();
				case 2:
					throw LargeValue();
			}
			
		} catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	
}
BitcoinExchange::WrongDate::WrongDate(const char* msg) : message(msg) {}
const char *BitcoinExchange::WrongDate::what() const throw(){
	std::string total = "Error: bad input => ";
	total += message;
	return total.c_str();
}

const char *BitcoinExchange::LargeValue::what() const throw(){
	return "Error: too large a number.";
}
const char *BitcoinExchange::NegativeValue::what() const throw(){
	return "Error: not a positive number.";
}

BitcoinExchange::~BitcoinExchange(){}