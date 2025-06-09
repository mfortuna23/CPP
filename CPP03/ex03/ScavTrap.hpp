/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 08:27:01 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/09 14:38:30 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
	protected :
		bool	gateKeeping;
	public:
		ScavTrap();
		ScavTrap(std::string newName);
		ScavTrap(const ScavTrap& t);
		ScavTrap& operator= (const ScavTrap& other);
		void guardGate();
		void attack(std::string target);
		~ScavTrap();
} ;