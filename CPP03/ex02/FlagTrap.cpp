/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:09:57 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/04 13:59:08 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(){
	name = "";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FlagTrap::FlagTrap(std::string newName){
	name = newName;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FlagTrap::FlagTrap(const FlagTrap& other) : ClapTrap(other){
	*this = other;
}

FlagTrap &FlagTrap::operator= (const FlagTrap& other){
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	return(*this);
}

FlagTrap::~FlagTrap {
	std::cout << BLUE << "FlagTrap"
}