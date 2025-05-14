/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:32:30 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/14 15:45:47 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hitPoints(10), energyPoints(10), attackDamage(10) {};

ClapTrap::ClapTrap(std::string newName){
	if (newName.empty() || newName.length() == 0)
		name = "";
	name = newName;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
}

ClapTrap::ClapTrap(const ClapTrap& t){
	this->name = t.getName();
	this
}

std::string	ClapTrap::getName(void) const {return name;}
void		ClapTrap::setName(std::string newName){name = newName;}
int			ClapTrap::getHitPoints(void){return hitPoints;}
void		ClapTrap::setHitPoints(int n){hitPoints = n;}
int			ClapTrap::getEnergyPoints(void){return energyPoints;}
void		ClapTrap::setEnergyPoints(int n){energyPoints = n;}
int			ClapTrap::getAttackDamage(void){return attackDamage;}
void		ClapTrap::setAttackDamage(int n){attackDamage = n;}
