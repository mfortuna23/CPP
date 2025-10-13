/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:59:52 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/13 13:09:02 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac != 2)
		return 1;
	std::ifstream data("data.csv");
	if (!data)
		return 1;
	std::ifstream wallet(av[1]);
	if (!wallet){
		data.close();
		return 1;
	}
	BitcoinExchange d(&data);
	BitcoinExchange w(&wallet);
	data.close();
	wallet.close();
	d.printExchange(w);
	return 0;
}