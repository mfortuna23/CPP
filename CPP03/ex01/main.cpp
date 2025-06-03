/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:25:49 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/03 14:30:34 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	ScavTrap n("scav");
	std::cout << n.getEnergyPoints() << std::endl;
	std::cout << n.getName() << std::endl;
}