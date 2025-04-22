/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:47:56 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/22 17:30:55 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *type;
	public:
		HumanB (std::string nName);
		void	setWeapon(Weapon wType);
		void	attack(void);
		~HumanB	();
} ;

#endif
