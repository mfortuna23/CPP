/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:14:23 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/14 16:23:17 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define blue "\033[34m"
#define red "\033[31m"
#define green "\033[32m"
#define yellow "\033[33m"
#define magenta "\033[35m"
#define cyan "\033[36m"
#define reset "\033[0m"

class ClapTrap{
	private:
		std::string name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap& t);
		ClapTrap& operator= (const ClapTrap& other);
		std::string	getName(void);
		void		setName(std::string newName);
		int			getHitPoints(void);
		void		setHitPoints(int n);
		int			getEnergyPoints(void);
		void		setEnergyPoints(int n);
		int			getAttackDamage(void);
		void		setAttackDamage(int n);
		void	attack(const std::string& target) const;
		void	takeDamage(unsigned int amount) const;
		void	beRepaired(unsigned int amount) const;
		~ClapTrap();
} ;