/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 10:54:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/12 10:50:16 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << YELLOW << "Cat default constructor" << RESET << std::endl;
	catBrain = new Brain;
}

Cat::Cat(const Cat& other) : Animal("Cat"){
	std::cout << YELLOW << "Cat copy constructor" << RESET << std::endl;
	*this = other;
}

Cat& Cat::operator= (const Cat& other){
	std::cout << YELLOW << "Cat copy assignment operator called" << RESET << std::endl;
	Brain *tmp = catBrain;
	delete tmp;
	catBrain = new Brain(*other.catBrain);
	type = other.getType();
	return *this;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "meow meow purr..." << RESET << std::endl;
}

void Cat::addIdeas(std::string newIdeas){
	catBrain->addIdea(newIdeas);
}

void Cat::printIdeas(){
	catBrain->printIdeas();
}

Cat::~Cat(){
	std::cout << YELLOW << "Cat default destructor" << RESET << std::endl;
	delete catBrain;
}