/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:07:22 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/22 17:31:49 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string nName) : name(nName), type(NULL){}
HumanB::~HumanB	(){
	if (type)
		delete type;
};

void	HumanB::attack(void){

	std::cout << name << " attacks with their ";
	if (!type || type->getWeapon().empty())
		std::cout << "hands" << std::endl;
	else
		std::cout << type->getWeapon() << std::endl;
}

void	HumanB::setWeapon(Weapon wType){
	Weapon *nWeapon;

	nWeapon = new Weapon(wType.getWeapon());
	type = nWeapon;}
