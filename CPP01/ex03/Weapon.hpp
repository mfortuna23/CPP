/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:34:46 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/08 15:55:57 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <cstring>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string nType);
		void		setType(std::string nType);
		std::string getWeapon(void);
} ;

#endif