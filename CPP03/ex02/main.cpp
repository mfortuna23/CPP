/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:25:49 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/04 11:50:50 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	ScavTrap n("scav");
	n.guardGate();
	n.attack("123");
	n.takeDamage(101);
	n.beRepaired(2);
	std::cout << n.getHitPoints() << std::endl;
	ScavTrap other(n);
	other.setName("other");
	other.attack("123");
	other.guardGate();
}