/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:25:39 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/09 14:38:11 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap(), FragTrap() {
	std::cout << CYAN << "DiamondTrap: Default constructor called" << RESET << std::endl;
	name = "";
	hitPoints = FragTrap::getHitPoints();
	
	
}