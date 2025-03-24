/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:27:21 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/24 11:29:05 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstring>

int		PhoneBook::maxContacts(void)
{
	for (int i = 1; i < MAX_CONTACTS; i++){
		elem[i - 1].setFirstName(elem[i].getFirstName());
		elem[i - 1].setLastName(elem[i].getLastName());
		elem[i - 1].setNickName(elem[i].getNickName());
		elem[i - 1].setPhoneNumber(elem[i].getPhoneNumber());
		elem[i - 1].setDarkestSecret(elem[i].getDarkestSecret());
	}
	return (MAX_CONTACTS - 1);
}

std::string tenChars(std::string input)
{
	if (input.length() < 10)
		return input;
	input.resize(9);
	input.resize(10, '.');
	return input;
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

void	PhoneBook::search(void)
{
	if (elem[0].getIndex() == 0){
		std::cout << "You have no saved contacts" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++){
		std::cout << std::setw(10) << elem[i].getIndex() << "|";
		std::cout << std::setw(10) << tenChars(elem[i].getFirstName()) << "|";
		std::cout << std::setw(10) << tenChars(elem[i].getLastName()) << "|";
		std::cout << std::setw(10) << tenChars(elem[i].getNickName()) << std::endl;
	}
	return ;
}
