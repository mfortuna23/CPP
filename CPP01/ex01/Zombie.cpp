/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:37:07 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/28 11:30:37 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name(""){}
Zombie::~Zombie(){}
void		Zombie::annouce(void){
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void		Zombie::setName(std::string newName){
	name = newName;}

std::string	Zombie::getName(void){
	return name;}