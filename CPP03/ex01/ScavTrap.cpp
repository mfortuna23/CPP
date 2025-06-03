/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 08:26:42 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/03 14:42:12 by mfortuna         ###   ########.fr       */
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

ScavTrap::ScavTrap(std::string newName){
	std::cout << CYAN << "ScavTrap: String constructor called" << RESET << std::endl;
	if (newName.empty() || newName.length() == 0)
		name = "";
	this->setName(newName);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& t){
	std::cout << CYAN << "ScavTrap: Copy constructor called" << RESET << std::endl;
	*this = t;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& other){
	std::cout << CYAN << "ScavTrap: Copy assignment operator called" << RESET << std::endl;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return (*this);
}

void ScavTrap::guardGate(){
	std::cout << RED << "ScavTrap " << name << " is now in Gate keeper mode "<< RESET << std::endl;
}