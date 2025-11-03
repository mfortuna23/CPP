/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:05:58 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/30 11:36:59 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <ctime>
#include <set>

long int	nowtime(struct timeval start)
{
	long int		seconds;
	long int		micro;
	long int		mil;
	struct timeval	now;

	gettimeofday(&now, NULL);
	seconds = now.tv_sec - start.tv_sec;
	micro = now.tv_usec - start.tv_usec;
	mil = (seconds * 1000) + (micro / 1000);
	return (mil);
}

int main(int ac, char **av){
	if (ac < 3)
		return 1;
	try {
		std::vector<long> a;
		std::deque<long> b;
		a.push_back(-1);
		b.push_back(-1);
		PmergeMe vec(a); 
		PmergeMe de(b);
		vec.insert(av + 1);
		de.insert(av + 1);
		std::cout << "start point\n";
		vec.print();
		clock_t start = clock();
		vec.sort();
		clock_t end = clock();
		double durationVect = (double)(end - start) * 100 / CLOCKS_PER_SEC;
		std::cout << "finished sort \n";
		vec.print();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << durationVect << " us\n";
		start = clock();
		de.sort();
		end = clock();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << (double)(end - start) * 100 / CLOCKS_PER_SEC << " us\n";
	}
	catch (std::exception &e){
		std::cout << e.what();
	}

}