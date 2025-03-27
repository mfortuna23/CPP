/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:37:07 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/27 15:52:59 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::annouce(void){
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}