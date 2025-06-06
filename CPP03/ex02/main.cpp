/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:25:49 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/06 15:54:26 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void){
	ClapTrap a("CLAP");
	ScavTrap b("SCAV");
	FragTrap c("Frag");
	
	a.attack("SCAV");
	b.takeDamage(a.getAttackDamage());
	c.highFiveGuys();
	b.guardGate();
	c.attack("SCAV");
	b.takeDamage(c.getAttackDamage());
	b.attack("Frag");
	c.takeDamage(b.getAttackDamage());
}