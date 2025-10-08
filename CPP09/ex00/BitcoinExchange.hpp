/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:54:29 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/08 15:19:02 by mfortuna         ###   ########.fr       */
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

typedef struct date {
	int year;
	int month;
	int day;
} ;

class BitcoinExchange {	
	public :
		std::map<date, int> btc;
		BitcoinExchange();
		BitcoinExchange(std::ifstream file);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		int returnValue(date _date);
		~BitcoinExchange();
} ;

#endif