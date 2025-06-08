/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:54:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/08 11:45:54 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << GREEN << "WrongCat default constructor" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other){
	std::cout << GREEN << "WrongCat copy constructor" << RESET << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator= (const WrongCat& other){
	std::cout << GREEN << "WrongCat copy assignment operator called" << RESET << std::endl;
	type = other.getType();
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << GREEN << "woem woem rrup..." << RESET << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << GREEN << "WrongCat default destructor" << RESET << std::endl;
}