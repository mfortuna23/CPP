/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 08:26:42 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/03 13:59:37 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << CYAN << "ScavTrap: Default constructor called" << RESET << std::endl;
	this->setName("");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout << BLUE << "ScavTrap: Destructor called" << RESET << std::endl;
}

/* ClapTrap::ClapTrap(std::string newName){
	std::cout << CYAN << "String constructor called" << RESET << std::endl;
	if (newName.empty() || newName.length() == 0)
		name = "";
	name = newName;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
}

ClapTrap::ClapTrap(const ClapTrap& t){
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
	*this = t;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other){
	std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return (*this);
} */