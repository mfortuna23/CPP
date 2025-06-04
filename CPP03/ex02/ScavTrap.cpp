/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 08:26:42 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/04 11:57:53 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << CYAN << "ScavTrap: Default constructor called" << RESET << std::endl;
	name = "";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gateKeeping = false;
}

ScavTrap::~ScavTrap() {
	std::cout << BLUE << "ScavTrap: Destructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string newName){
	std::cout << CYAN << "ScavTrap: String constructor called" << RESET << std::endl;
	if (newName.empty() || newName.length() == 0)
		name = "";
	name = newName;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	gateKeeping = false;
}

ScavTrap::ScavTrap(const ScavTrap& t) : ClapTrap(t){
	std::cout << CYAN << "ScavTrap: Copy constructor called" << RESET << std::endl;
	*this = t;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& other){
	std::cout << CYAN << "ScavTrap: Copy assignment operator called" << RESET << std::endl;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	gateKeeping = other.gateKeeping;
	return (*this);
}

void ScavTrap::guardGate(){
	if (!gateKeeping){
		std::cout << GREEN << "ScavTrap " << name << " is now in gate keeper mode"<< RESET << std::endl;
		this->gateKeeping = true;
	}
	else
		std::cout << RED << "ScavTrap " << name << " is already in gate keeper mode"<< RESET << std::endl;
}

void ScavTrap::attack(std::string target){
	if (hitPoints == 0){
		std::cout << RED << "ScavTrap " << name << " can`t attack without hitPoints" 
		<< RESET << std::endl;
		return ;
	}
	if (energyPoints < 1){
		std::cout << RED << "ScavTrap " << name << " can`t attack without energy" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "ScavTrap " << name << " attacks " << target 
	<< ", causing " << attackDamage << " points of damage" << RESET << std::endl;
	energyPoints--;
	
}