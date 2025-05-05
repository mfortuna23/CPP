/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:07:22 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/02 17:30:41 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string nName) : name(nName), type(NULL){}
HumanB::~HumanB	(){}

void	HumanB::attack(void){

	std::cout << name << " attacks with their ";
	if (!type || type->getWeapon().empty())
		std::cout << "hands" << std::endl;
	else
		std::cout << type->getWeapon() << std::endl;
}

void	HumanB::setWeapon(Weapon &wType){
	type = &wType;}
