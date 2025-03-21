/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:57:10 by mfortuna          #+#    #+#             */
/*   Updated: 2025/03/21 18:53:31 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook{
	private:
		Contact elem[MAX_CONTACTS];
	public:
		int		maxContacts(void);
		void	addContact(void);
		void	search(void);
};

#endif