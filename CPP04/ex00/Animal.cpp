/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:28:36 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/07 11:26:50 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("undifined"){
	std::cout << CYAN << "Animal default constructor" << RESET << std::endl;
}

Animal::Animal(const std::string nType) {
	std::cout << CYAN << "Animal type constructor" << RESET << std::endl;
	type = nType;
}

Animal::Animal(const Animal& other){
	std::cout << CYAN << "Animal copy constructor" << RESET << std::endl;
	*this = other;
}

Animal& Animal::operator= (const Animal& other){
	std::cout << CYAN << "Animal copy assignment operator called" << RESET << std::endl;
	this->type = other.type;
	return *this;
}

void Animal::makeSound() const{
	std::cout << CYAN << "...* undifined animal sound*..." << RESET << std::endl;
}

std::string Animal::getType(void) const{
	return type;
}

void	Animal::setType(const std::string nType){
	type = nType;
}

Animal::~Animal(){
		std::cout << CYAN << "Animal default destructor" << RESET << std::endl;
}