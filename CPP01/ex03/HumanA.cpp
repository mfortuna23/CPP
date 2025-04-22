/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:50:41 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/08 15:56:22 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nName, Weapon &wType) : name(nName), type(wType) {}

void HumanA::attack(void){
	std::cout << name << " atacks with their " << type.getWeapon() << std::endl;
}