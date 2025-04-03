/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:40:01 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/03 11:49:44 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *newZ;

	newZ = newZombie("");
	randomChump("NotAllocated");
	newZ->annouce();
	delete newZ;
	return 0;
}