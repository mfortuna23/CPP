/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:12:14 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/09 15:34:29 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP
#pragma once

#include <iostream>
#include <string>

#define BLUE "\033[34m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

class Brain {
	private :
		std::string ideas[100];
		int number = 0;
	public :
		Brain();
		Brain(const Brain& other);
		Brain& 		operator= (const Brain& other);
		void 		addIdea (std::string newIdea);
		void		printIdeas();
		//std::string getIdeas() const;
		void		setIdeas(std::string otherIdeas);
		~Brain();
} ;

#endif