/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:35:51 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/13 10:54:34 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << GREEN << "Brain default constructor called" << RESET << std::endl;
}

Brain::~Brain(){
	std::cout << GREEN << "Brain destructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;
	*this = other;
}

Brain& Brain::operator= (const Brain& other){
	std::cout << GREEN << "Brain copy assignment operator called" << RESET << std::endl;
	if (this != &other){
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

void 		Brain::addIdea (std::string newIdea){
	int i = 0;
	while (i < 100){
		if (ideas[i].empty()){
			ideas[i] = newIdea;
			return ;
		}
		i++;
	}
	if (i == 100)
		std::cout << GREEN << "Brain is full, can't add more ideas" << RESET << std::endl;
}

void		Brain::printIdeas(){
	for (int i = 0; i < 100; i++){
		if (ideas[i].empty()){
				if (i == 0)
					std::cout << GREEN << "Brain is idealess" << RESET << std::endl;
			return ;}
		std::cout << ideas[i] << std::endl;
	}
}

//std::string getIdeas() const;
//void		setIdeas(std::string otherIdeas);