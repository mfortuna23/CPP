/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:06:26 by mfortuna          #+#    #+#             */
/*   Updated: 2025/12/12 10:59:32 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <deque>
#include <exception>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <set>
#include <iomanip>
#include <cmath>
#include <limits.h>

class PmergeMe {
	private :
		std::vector<std::vector<int> > vect;
		std::deque<std::deque<int> > deque;
	public :
		clock_t timeVect;
		clock_t timeDeque;
		PmergeMe();
		PmergeMe(char **av);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		std::vector<std::vector<int> >  getVect() const ;
		std::deque<std::deque<int> > getDeque() const ;
		void print(void);
		void sort(void);
		class NotANumber : public std::exception {
			virtual const char *what() const throw();
		} ;
		class NegativeNumber : public std::exception {
			virtual const char *what() const throw();
		} ;
		class DefaultConstructor : public std::exception {
			virtual const char *what() const throw();
		} ;
} ;

template <class T>
bool isSorted(T other){
	int tmp = 0;
	for (size_t y = 0; y < other.size(); y++){
		if (other[y][0] < tmp){
			std::cout << "\n\n" << tmp << "is bigger than " << other[y][0] << std::endl;
			return false;
		}
		tmp = other[y][0];
	}
	return true;
}

#endif