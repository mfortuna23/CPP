/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:37:11 by mfortuna          #+#    #+#             */
/*   Updated: 2025/05/06 10:47:54 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void	harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
	<< "pickle-specialketchup burger. I really do!" << std::endl;
}
void	harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You"
	<< " didn’t put enough bacon in my burger! If you did, I wouldn’t be"
	<< " asking for more!" << std::endl;
}
void	harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free." 
	<< " I’ve been coming for years, whereas you started working here just"
	<< " last month." << std::endl;
}
void	harl::error(void){
	std::cout <<  "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}
void	harl::complain(std::string level){
	void (harl::*actions[4])() = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	std::string input[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (input[i] == level){
			(this->*actions[i])();
			return ;}
	}
	std::cout << level << ": is wrong. Plz try \"DEBUG\" \"INFO\" \"WARNING\" \"ERROR\"" << std::endl;
}
