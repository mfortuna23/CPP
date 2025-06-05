/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:25:49 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/05 10:48:23 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

int main(void){
	ClapTrap a("CLAP");
	ScavTrap b("SCAV");
	FlagTrap c("FLAG");
	
	a.attack("SCAV");
	b.takeDamage(a.getAttackDamage());
	c.highFiveGuys();
	b.guardGate();
	c.attack("SCAV");
	b.takeDamage(c.getAttackDamage());
	b.attack("FLAG");
	c.takeDamage(b.getAttackDamage());
}