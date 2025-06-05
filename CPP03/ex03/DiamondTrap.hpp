/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:02:55 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/05 13:21:48 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

class DiamondTrap : public ClapTrap, public ScavTrap, public FlagTrap {
	private :
		std::string name;
	public	:
		DiamondTrap();
		DiamondTrap(std::string);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator= (const DiamondTrap& other);
		void whoAmI ();
		~DiamondTrap();
} ;