/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:05:58 by mfortuna          #+#    #+#             */
/*   Updated: 2025/11/12 13:54:25 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <set>

int main(int ac, char **av){
	if (ac < 3)
		return 1;
	try {
		PmergeMe sorting(av + 1);
		std::cout << "before:\t";
		sorting.print();
		sorting.sort();
		sorting.print();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << static_cast<double>(sorting.timeVect) * 1000000.0 / CLOCKS_PER_SEC << " us\n";
		//std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque  : " << static_cast<double>(timeDeq) * 1000000.0 / CLOCKS_PER_SEC << " us\n";
	}
	catch (std::exception &e){
		std::cout << e.what();
	}

}