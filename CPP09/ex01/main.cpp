/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:37:46 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/15 11:10:58 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2){ // must take an inverted Polish mathematical expression 
		std::cerr << RED << "Error\n" << RESET;
		return 1;
	}
	RPN result;
	try {
		result.run(av[1]);
	} 
	catch (int){
		std::cerr << "Error\n";
	}
	return 0;
}