/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:35:51 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/09 15:40:31 by mfortuna         ###   ########.fr       */
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
	if (other.number == 0)
		return *this;
	
}
void 		addIdea (std::string newIdea);
void		printIdeas();
//std::string getIdeas() const;
void		setIdeas(std::string otherIdeas);