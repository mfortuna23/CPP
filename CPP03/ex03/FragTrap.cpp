/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:09:57 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/06 15:52:02 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << CYAN << "FragTrap: Default constructor called" << RESET << std::endl;
	name = "";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string newName){
	std::cout << CYAN << "FragTrap: String constructor called" << RESET << std::endl;
	name = newName;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << CYAN << "FragTrap: Copy constructor called" << RESET << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator= (const FragTrap& other){
	std::cout << CYAN << "FragTrap: Copy assignment operator called" << RESET << std::endl;
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return(*this);
}

void FragTrap::highFiveGuys(void){
	std::cout << GREEN << "FlapTrap:" << name << " requests high five" << RESET << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << BLUE << "FragTrap: Destructor called" << RESET << std::endl;
}