/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:59:52 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/10 11:12:49 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 2)
		return 1;
	std::ifstream data("data.csv");
	if (!data)
		return 1;
	std::ifstream wallet(av[2]);
	if (!wallet)
		return 1;
		
	data.close();
	
	return 0;
}