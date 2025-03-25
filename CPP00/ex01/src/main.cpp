/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:19:50 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/25 13:43:13 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <limits>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook 	book;

	std::cout << "Welcome to your phonebook\nWhat do you want to do?" << std::endl;
	while (1){
		std::getline(std::cin, input);
		if (std::cin.eof()){
			if (book.getNContacts() > 0)
				std::cout << "All contacts have been deleted"<< std::endl;
			return 0;
		}
		else if (input == "ADD"){
			book.addContact();
		}
		else if (input == "SEARCH"){
			book.search();
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Wrong command, plz try \"ADD\" or \"SEARCH\" or \"EXIT\"" << std::endl;
		if (std::cin.eof()){
			if (book.getNContacts() > 0)
				std::cout << "All contacts have been deleted"<< std::endl;
			return 0;		
		}
		std::cout << "What do you want to do next?" << std::endl;
	}
	if (book.getNContacts() > 0)
		std::cout << "All contacts have been deleted"<< std::endl;
	return (0);
}
