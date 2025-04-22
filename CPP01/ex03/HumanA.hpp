/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:39:15 by mfortuna          #+#    #+#             */
/*   Updated: 2025/04/08 15:27:14 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon 		&type;
	public :
		HumanA	(std::string nName, Weapon &wType);
		void 	attack(void);
		~HumanA	() {};
} ;

#endif