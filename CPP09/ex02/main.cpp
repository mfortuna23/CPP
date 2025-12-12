/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:05:58 by mfortuna          #+#    #+#             */
/*   Updated: 2025/12/12 11:06:30 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <set>
#include <iomanip>

int main(int ac, char **av){
	if (ac < 3)
		return 1;
	try {
		PmergeMe sorting(av + 1);
		std::cout << "before:\t";
		sorting.print();
		sorting.sort(); 
		std::cout << "after:\t";
		sorting.print();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << std::fixed << std::setprecision(1) << static_cast<double>(sorting.timeVect) * 1000000 / CLOCKS_PER_SEC << " us\n";
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque  : " << std::fixed << std::setprecision(1) << static_cast<double>(sorting.timeDeque) * 1000000 / CLOCKS_PER_SEC << " us\n";
		if (isSorted(sorting.getDeque()) && isSorted(sorting.getVect()))
			std::cout << "SORTED" << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what();
	}

}