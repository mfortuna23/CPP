/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:09:57 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/04 14:31:08 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(){
	std::cout << CYAN << "FlagTrap: Default constructor called" << RESET << std::endl;
	name = "";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FlagTrap::FlagTrap(std::string newName){
	std::cout << CYAN << "FlagTrap: String constructor called" << RESET << std::endl;
	name = newName;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FlagTrap::FlagTrap(const FlagTrap& other) : ClapTrap(other){
	std::cout << CYAN << "FlagTrap: Copy constructor called" << RESET << std::endl;
	*this = other;
}

FlagTrap &FlagTrap::operator= (const FlagTrap& other){
	std::cout << CYAN << "FlagTrap: Copy assignment operator called" << RESET << std::endl;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return(*this);
}

FlagTrap::~FlagTrap() {
	std::cout << BLUE << "FlagTrap: Destructor called" << RESET << std::endl;
}