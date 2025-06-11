/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:54:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/11 13:41:34 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << YELLOW << "Cat default constructor" << RESET << std::endl;
	catBrian = new Brain;
}

Cat::Cat(const Cat& other) : Animal("Cat"){
	std::cout << YELLOW << "Cat copy constructor" << RESET << std::endl;
	*this = other;
}

Cat& Cat::operator= (const Cat& other){
	std::cout << YELLOW << "Cat copy assignment operator called" << RESET << std::endl;
	if (!catBrian){
		catBrian = new Brain(&other.catBrian);
		}
	type = other.getType();
	return *this;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "meow meow purr..." << RESET << std::endl;
}

void Cat::addIdeas(std::string newIdeas){
	catBrian->addIdea(newIdeas);
}

void Cat::printIdeas(){
	catBrian->printIdeas();
}

Cat::~Cat(){
	std::cout << YELLOW << "Cat default destructor" << RESET << std::endl;
	delete catBrian;
}