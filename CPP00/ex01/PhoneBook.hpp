/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:57:10 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/25 13:35:25 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook{
	private:
		Contact elem[MAX_CONTACTS];
		int		nContacts;
	public:
		PhoneBook () : nContacts(0){}
		int		maxContacts(void);
		void	addContact(void);
		void	search(void);
		int		getNContacts(void){return nContacts;};
};

#endif