/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:15:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/12 17:21:01 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"){
	std::cout << MAGENTA << "Dog default constructor" << RESET << std::endl;
	dogBrain = new Brain;
}

Dog::Dog(const Dog& other) : AAnimal("Dog"){
	std::cout << MAGENTA << "Dog copy constructor" << RESET << std::endl;
	dogBrain = new Brain;
	*this = other;
}

Dog& Dog::operator= (const Dog& other){
	std::cout << MAGENTA << "Dog copy assignment operator called" << RESET << std::endl;
	if (dogBrain)
		delete dogBrain;
	dogBrain = new Brain(*other.dogBrain);
	type = other.getType();
	return *this;
}

void Dog::makeSound() const {
	std::cout << MAGENTA << "barf barf" << RESET << std::endl;
}

void Dog::addIdeas(std::string newIdeas){
	if (dogBrain)
		dogBrain->addIdea(newIdeas);
}

void Dog::printIdeas(){
	if (dogBrain)
		dogBrain->printIdeas();
}

Dog::~Dog(){
	std::cout << MAGENTA << "Dog default destructor" << RESET << std::endl;
	if (dogBrain)
		delete dogBrain;
}