/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:52:55 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/24 10:26:04 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string nType) : type(nType){}

void		Weapon::setType(std::string nType){
	type = nType;}

const std::string& Weapon::getWeapon(void){
	return type;}