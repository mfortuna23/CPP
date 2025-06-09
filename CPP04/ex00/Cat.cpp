/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:54:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/09 15:27:14 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << YELLOW << "Cat default constructor" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal("Cat"){
	std::cout << YELLOW << "Cat copy constructor" << RESET << std::endl;
	*this = other;
}

Cat& Cat::operator= (const Cat& other){
	std::cout << YELLOW << "Cat copy assignment operator called" << RESET << std::endl;
	type = other.getType();
	return *this;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "meow meow purr..." << RESET << std::endl;
}

Cat::~Cat(){
	std::cout << YELLOW << "Cat default destructor" << RESET << std::endl;
}