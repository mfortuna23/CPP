/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:28:36 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/07 11:26:50 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("undifined"){
	std::cout << CYAN << "AAnimal default constructor" << RESET << std::endl;
}

AAnimal::AAnimal(const std::string nType) {
	std::cout << CYAN << "AAnimal type constructor" << RESET << std::endl;
	type = nType;
}

AAnimal::AAnimal(const AAnimal& other){
	std::cout << CYAN << "AAnimal copy constructor" << RESET << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator= (const AAnimal& other){
	std::cout << CYAN << "AAnimal copy assignment operator called" << RESET << std::endl;
	this->type = other.type;
	return *this;
}

// void AAnimal::makeSound() const{
// 	std::cout << CYAN << "...* undifined AAnimal sound*..." << RESET << std::endl;
// }

std::string AAnimal::getType(void) const{
	return type;
}

void	AAnimal::setType(const std::string nType){
	type = nType;
}

AAnimal::~AAnimal(){
		std::cout << CYAN << "AAnimal default destructor" << RESET << std::endl;
}