/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:05:58 by mfortuna          #+#    #+#             */
/*   Updated: 2025/11/11 12:13:24 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <set>

int main(int ac, char **av){
	if (ac < 3)
		return 1;
	try {
		std::vector<int> a;
		std::deque<int> b;
		a.push_back(-1);
		b.push_back(-1);
		PmergeMe vec(a); 
		PmergeMe de(b);
		vec.insert(av + 1);
		de.insert(av + 1);
		std::cout << "before:\t";
		vec.print();
		clock_t timeVec = clock();
		vec.sort();
		timeVec = clock() - timeVec;
		std::cout << "after\t";
		vec.print();
		//clock_t timeDeq = clock();
		//de.sort();
		//timeDeq = clock() - timeDeq;
		//de.print();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << static_cast<double>(timeVec) * 1000000.0 / CLOCKS_PER_SEC << " us\n";
		//std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque  : " << static_cast<double>(timeDeq) * 1000000.0 / CLOCKS_PER_SEC << " us\n";
	}
	catch (std::exception &e){
		std::cout << e.what();
	}

}