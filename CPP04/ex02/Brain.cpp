/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:35:51 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/12 15:52:42 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << BLUE << "Brain: Default constructor called" << RESET << std::endl;
}

Brain::~Brain(){
	std::cout << BLUE << "Brain: Destructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other){
	*this = other;
}

Brain& Brain::operator= (const Brain& other){
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
		std::cout << BLUE << "Brain is full, can't add more ideas" << RESET << std::endl;
}

void		Brain::printIdeas(){
	for (int i = 0; i < 100; i++){
		if (ideas[i].empty()){
				if (i == 0)
					std::cout << BLUE << "Brain is idealess" << RESET << std::endl;
			return ;}
		std::cout << ideas[i] << std::endl;
	}
}

//std::string getIdeas() const;
//void		setIdeas(std::string otherIdeas);