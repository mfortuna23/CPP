/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:31:55 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/25 11:28:26 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::resetContact(void)
{
	firstName = "";
	lastName = "";
	nickName = "";
	darkestSecret = "";
	phoneNumber = "";
}

void	Contact::setContact(std::string fn, std::string ln, std::string nn, \
std::string ds, std::string n)
{
	firstName = fn;
	lastName = ln;
	nickName = nn;
	darkestSecret = ds;
	phoneNumber = n;
}
