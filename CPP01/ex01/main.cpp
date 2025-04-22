/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:13:18 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/04 15:58:17 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void){
	Zombie  *horde = NULL;
	int		nZombies = 5;

	horde = zombieHorde(nZombies, "hello");
	for (int i = 0; i < nZombies; i++){
		horde[i].annouce();
	}
	delete[] horde;
	return (0);
}
