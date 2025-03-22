/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:27:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/22 09:41:02 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>

int		PhoneBook::maxContacts(void)
{
	int i = 0;
	while (i < MAX_CONTACTS){
		if (elem[i].getIndex() == 1)
			break ;
		i++;
	}
	elem[i].setIndex(9);
	for (int x = 0; x < MAX_CONTACTS; x++){
		elem[x].setIndex(elem[x].getIndex() - 1);
	}
	return (i);
}

void	PhoneBook::addContact(void)
{
	std::string input;
	int			number = 0;
	unsigned	i = 0;

	while (i < MAX_CONTACTS){
		if (elem[i].getIndex() == 0)
			break ;
		i++;
	}
	if (i == MAX_CONTACTS){
		i = PhoneBook::maxContacts();
	}
	else
		elem[i].setIndex(i + 1);
	std::cout << "First name: ";
	std::getline(std::cin, input);
	elem[i].setFirstName(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	elem[i].setLastName(input);
	std::cout << "NickName: ";
	std::getline(std::cin, input);
	elem[i].setNickName(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	elem[i].setDarkestSecret(input);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	elem[i].setPhoneNumber(number);
	std::cin.clear();
	return ;
}

void	PhoneBook::search(void) //TODO fix me
{
	for (int i = 0; i < MAX_CONTACTS; i++){
		if (elem[i].getIndex() == 0){
			if (i == 0)
				std::cout << "You have no saved contacts" << std::endl;
			return ;
		}
		std::cout << "\t";
		std::cout << elem[i].getIndex();
		std::cout << "\t|\t";
		std::cout << elem[i].getFirstName();
		std::cout << "\t|\t";
		std::cout << elem[i].getLastName() << std::endl;
	}
	return ;
}