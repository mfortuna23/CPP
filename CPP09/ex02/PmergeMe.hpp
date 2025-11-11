/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:06:26 by mfortuna          #+#    #+#             */
/*   Updated: 2025/11/11 16:36:12 by mfortuna         ###   ########.fr       */
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

class PmergeMe {
	private :
		void insertVect(char **av);
		void insertdeque(char **av);
		void sortVect(void);
		void sortDeque(void);
		bool makepairsDeque(void);
		void makepairsVect(void);
		bool undopairsVect(void);
		bool undopairsDeque(void);
	public :
		std::vector<std::vector<int> > vect;
		std::deque<std::deque<int> > deque;
		int odd;
		PmergeMe();
		PmergeMe(std::vector<int> a);
		PmergeMe(std::deque<int> a);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		void print(void);
		void insert(char **av);
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
		class DuplicatedNumber : public std::exception {
			virtual const char *what() const throw();
		} ;
} ;




#endif