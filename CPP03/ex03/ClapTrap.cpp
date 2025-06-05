/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:32:30 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/04 11:52:36 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(10) {
	std::cout << CYAN << "Default constructor called" << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << BLUE << "Destructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string newName){
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
}

void ClapTrap::attack(const std::string&target){
	if (hitPoints == 0){
		std::cout << RED << "ClapTrap " << name << " can`t attack without hitPoints" 
		<< RESET << std::endl;
		return ;
	}
	if (energyPoints < 1){
		std::cout << RED << "ClapTrap " << name << " can`t attack without energy" << RESET << std::endl;
		return ;
	}
	std::cout << YELLOW << "ClapTrap " << name << " attacks " << target 
	<< ", causing " << attackDamage << " points of damage" << RESET << std::endl;
	energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints == 0){
		std::cout << RED << "ClapTrap " << name << " can`t take more damage" 
		<< RESET << std::endl;
		return ;
	}
	if ((int)amount > hitPoints)
		amount = hitPoints;
	std::cout << MAGENTA << "ClapTrap " << name << " took " << amount 
	<< " points of damage" << RESET << std::endl;
	hitPoints-= amount ;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hitPoints == 0){
		std::cout << RED << "ClapTrap " << name << " can't be repaired without health" << RESET << std::endl;
		return ;
	}
	if (energyPoints == 0){
		std::cout << RED << "ClapTrap " << name << " can't be repaired without energy" << RESET << std::endl;
		return ;
	}
	std::cout << GREEN << "ClapTrap " << name << " repaired " << amount 
	<< " hit points" << RESET << std::endl;
	hitPoints += amount;
	energyPoints--;
}

std::string	ClapTrap::getName(void) const {return name;}
void		ClapTrap::setName(std::string newName) {name = newName;}
int			ClapTrap::getHitPoints(void) const {return hitPoints;}
void		ClapTrap::setHitPoints(int n) {hitPoints = n;}
int			ClapTrap::getEnergyPoints(void) const {return energyPoints;}
void		ClapTrap::setEnergyPoints(int n) {energyPoints = n;}
int			ClapTrap::getAttackDamage(void) const {return attackDamage;}
void		ClapTrap::setAttackDamage(int n) {attackDamage = n;}
