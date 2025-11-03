/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:54:29 by mfortuna          #+#    #+#             */
/*   Updated: 2025/11/03 12:00:48 by mfortuna         ###   ########.fr       */
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

typedef struct data_t {
	int year;
	int month;
	int day;
	float value;
} data;

class BitcoinExchange {	
	public :
		std::map<std::string, data> btc;
		BitcoinExchange();
		BitcoinExchange(std::ifstream *file);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		void printExchange(std::ifstream *wallet);
		class WrongDate : public std::exception {
			public :
				WrongDate(std::string msg);
				std::string message;
				virtual const char *what() const throw();
				~WrongDate() throw();
		} ;
		class NegativeValue : public std::exception {
			virtual const char *what() const throw();
		};
		class LargeValue : public std::exception {
			virtual const char *what() const throw();
		};
		class InvalidFormat : public std::exception {
			virtual const char *what() const throw();
		} ;
		~BitcoinExchange();
} ;

#endif