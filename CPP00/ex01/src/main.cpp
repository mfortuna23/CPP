/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:19:50 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/21 18:14:37 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string input;
	PhoneBook book;

	std::cout << "Welcome to your phonebook\nWhat do you want to do?" << std::endl;
	std::getline(std::cin, input);
	while (input != "EXIT"){
		std::cin.clear();
		if (input == "ADD"){
			book.AddContact();    
		}
		else if (input == "SEARCH"){
			book.Search();
		}
		else
			std::cout << "Wrong command, plz try \"ADD\" or \"SEARCH\" or \"EXIT\"" << std::endl;
		std::cout << "What do you want to do next?" << std::endl;
		std::getline(std::cin, input);
	}
	std::cout << "All contacts have been deleted"<< std::endl;
	return (0);
}
