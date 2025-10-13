/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:54:29 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/10 15:54:56 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <exception>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <sstream> 

typedef struct data {
	int year;
	int month;
	int day;
	float value;
} ;

class BitcoinExchange {	
	public :
		std::map<std::string, data> btc;
		BitcoinExchange();
		BitcoinExchange(std::ifstream file);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		void printExchange(const BitcoinExchange &wallet);
		class WrongDate : public std::exception {
			public :
				WrongDate(const char* msg);
			std::string message;
			virtual const char *what() const throw();
		} ;
		class NegativeValue : public std::exception {
			virtual const char *what() const throw();
		};
		class LargeValue : public std::exception {
			virtual const char *what() const throw();
		};
		~BitcoinExchange();
} ;

#endif