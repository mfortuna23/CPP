/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:28:36 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/12 17:21:37 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("undifined"){
	std::cout << RED << "WrongAnimal default constructor" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string nType) {
	std::cout << RED << "WrongAnimal type constructor" << RESET << std::endl;
	type = nType;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << RED << "WrongAnimal copy constructor" << RESET << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& other){
	std::cout << RED << "WrongAnimal copy assignment operator called" << RESET << std::endl;
	this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << RED << "...*undifined wrong animal sound*..." << RESET << std::endl;
}

std::string WrongAnimal::getType(void) const{
	return type;
}

void	WrongAnimal::setType(const std::string nType){
	type = nType;
}

WrongAnimal::~WrongAnimal(){
		std::cout << RED << "WrongAnimal default destructor" << RESET << std::endl;
}