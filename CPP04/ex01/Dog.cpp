/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:15:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/11 11:44:29 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << MAGENTA << "Dog default constructor" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal("Dog"){
	std::cout << MAGENTA << "Dog copy constructor" << RESET << std::endl;
	*this = other;
}

Dog& Dog::operator= (const Dog& other){
	std::cout << MAGENTA << "Dog copy assignment operator called" << RESET << std::endl;
	type = other.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << MAGENTA << "barf barf" << RESET << std::endl;
}

Dog::~Dog(){
	std::cout << MAGENTA << "Dog default destructor" << RESET << std::endl;
}