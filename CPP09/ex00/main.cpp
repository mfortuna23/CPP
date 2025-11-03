/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:59:52 by mfortuna          #+#    #+#             */
/*   Updated: 2025/11/03 11:42:21 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 2){
		if (ac == 1)
			std::cout << "Error: could not open file.\n";
		else
			std::cout << "Error: too many arguments.\n";
		return 1;
	}
	std::ifstream data("data.csv");
	if (!data){
		std::cout << "Error: could not open data.csv.\n";
		return 1;
	}
	std::ifstream wallet(av[1]);
	if (!wallet){
		data.close();
		std::cout << "Error: could not open file.\n";
		return 1;
	}
	BitcoinExchange d(&data);
	data.close();
	d.printExchange(&wallet);
	wallet.close();
	return 0;
}