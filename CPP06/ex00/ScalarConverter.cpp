/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:22:34 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/10 18:27:46 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &other){*this = other;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){(void)other; return *this;}

ScalarConverter::~ScalarConverter(){}

int checkForType(std::string str){
	if (str.length() == 1 )
		return 0;
}
void printChar(std::string c){
	(void)c;
}
void printInt(std::string i){
	(void)i;
}
void printFloat(std::string f){
	(void)f;
}
void printDouble(std::string d){
	(void)d;
}

void ScalarConverter::covert(std::string str){
	switch (checkForType(str)){
		case 0 :
			printChar(str); break ;
		case 1 :
			printChar(str);	break ;
		case 2 :
			printChar(str);	break ;
		case 3 :
			printChar(str); break ;
		default :
			std::cout << RED << "undifined" << RESET << std::endl;
	}
}