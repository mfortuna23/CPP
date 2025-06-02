/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:25:49 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/23 11:31:57 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap a;
	ClapTrap b("b");
	ClapTrap c(b);
	a = c;
	a.attack("b");
	b.attack("b");
	c.attack("b");

	a.setName("A");
	b.setName("B");
	c.setName("C");

	a.beRepaired(2);
	b.beRepaired(2);
	c.beRepaired(2);
	

	b.attack("A");
	b.attack("A");
	b.attack("A");
	b.attack("A");
	b.attack("A");
	b.attack("A");
	b.attack("A");
	b.attack("A");
	b.attack("A");
	b.attack("A");
}