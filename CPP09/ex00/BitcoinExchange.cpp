/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:11:06 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/08 15:26:32 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}


BitcoinExchange::BitcoinExchange(std::ifstream file){
	// read file, storage
	std::string buffer;
	date storage;
	while(getline(file, buffer)){
		std::istringstream iss(buffer);
		getline(iss, buffer, ',');
		storage.year = std::atoi(buffer.c_str());
		getline(iss, buffer, ',');
		storage.month = std::atoi(buffer.c_str());
		getline(iss, buffer, ',');
		storage.day = std::atoi(buffer.c_str());
	}
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
	*this = other;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
	btc = other.btc;
	return *this;
}
int BitcoinExchange::returnValue(date _date){
	// if (btc.find(date) != btc.end())
	// 	return (btc.find(date)->second);
	// std::istringstream iss(date);
	// std::string num;
	// std::getline(iss, num, '-');
	// int year = std::atoi(num.c_str());
	// std::getline(iss, num, '-');
	// int month = std::atoi(num.c_str());
	// std::getline(iss, num, '-');
	// int day = std::atoi(num.c_str());
	
	// //get date - check for good date
	
	// 	return -42 ;
	
}
BitcoinExchange::~BitcoinExchange(){}