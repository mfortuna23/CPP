/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:06:26 by mfortuna          #+#    #+#             */
/*   Updated: 2025/11/13 11:16:56 by mfortuna         ###   ########.fr       */
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
		std::vector<std::vector<int> > vect;
		std::deque<std::deque<int> > deque;
	public :
		int odd;
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
		void sortVect(std::vector<std::vector<int> > &container);

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

template <class T>
bool isSorted(T &other){
	int tmp = 0;
	for (size_t y = 0; y < other.size(); y++){
		if (other[y][0] < tmp)
			return false;
		tmp = other[y][0];
	}
	return true;
}

template<class T, class C>
void insertC(T &container, C &elem, char **av){
	container.clear();
	for (int i = 0; av[i]; i++){
		for (int j = 0; av[i][j]; j++){
			 if (!std::isdigit(av[i][j]))
				throw PmergeMe::NotANumber(); 
		}
		elem.push_back(std::atol(av[i]));
		if (find(container.begin(), container.end(), elem) == container.end())
			container.push_back(elem);
		else //duplicates
			throw PmergeMe::DuplicatedNumber(); 
		elem.pop_back();
	}
}
template<class T>
void concatenate(T &dest, T &src){
	dest.insert(dest.end(), src.begin(), src.end());
}

template<class T, class C>
void mergeInsertion(T &array, C &elem) {
		// std::cout << elem[elem.size() - 1] << std::endl;
	size_t arraySize = 0;
	for (size_t i = array.size() - 1; i > 0; i--){
		if (array[i].size() == elem.size()){
			arraySize = i;
			break;
		}
	}
	//size_t mid = arraySize / 2;
	size_t size = elem.size() - 1;
    typename T::iterator left = array.begin();
    typename T::iterator right = array.begin() + arraySize + 1;
    
    while (left < right) {
        typename T::iterator mid = left + (right - left) / 2;
		// if (left[0][size] > elem[elem.size() - 1]){
		// 	break ;
		// }
		// if (right[0][size] < elem[elem.size() - 1]){
		// 	left = right; break ;
		// }
        if ((*mid)[size] < elem[size]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    array.insert(left, elem);
}

const char *PmergeMe::NotANumber::what() const throw(){
	return "Recived a non number as an argument\n";
}
const char *PmergeMe::NegativeNumber::what() const throw(){
	return "Recived a non positive number as an argument\n";
}
const char *PmergeMe::DefaultConstructor::what() const throw(){
	return "Default constructor called\n";
}
const char *PmergeMe::DuplicatedNumber::what() const throw(){
	return "Recived a duplicated number as an argument\n";
}

PmergeMe::PmergeMe(char **av){
	odd = -1;
	std::vector<int> a;
	std::deque<int> b;
	insertC(vect, a, av);
	insertC(deque, b, av);
	if (vect.size() % 2 == 0)
		return;
	odd = vect[vect.size() -  1][0];
	vect.pop_back();
	deque.pop_back();
}

PmergeMe::PmergeMe(){
	throw DefaultConstructor(); 
}
PmergeMe::PmergeMe(const PmergeMe &other){
			*this = other;}
PmergeMe &PmergeMe::operator=(const PmergeMe &other){
			vect = other.getVect();
			deque = other.getDeque();
			odd = other.odd;
			return *this;
		}
PmergeMe::~PmergeMe(){};
std::vector<std::vector<int> > PmergeMe::getVect() const {return vect;}
std::deque<std::deque<int> > PmergeMe::getDeque() const {return deque;}


void PmergeMe::sortVect(std::vector<std::vector<int> > &container){
	size_t index = container[0].size() - 1; // we compare the last element
	//first compare pairs and swap when needed
	for (size_t i = 1; i < container.size(); i+= 2){
		if (container[i - 1].size() < container[0].size() || container[i].size() < container[0].size())
			break ; // can't compare diferent sized containers
		//std::cout << vect[i][vect[i].size() - 1] << "   " << vect[i + 1][vect[i + 1].size() - 1] << std::endl;
		if (container[i - 1][index] > container[i][index])
			std::swap(container[i - 1], container[i]);
	}
	//second check if we keep doing pairss
	if (container.size() < 4 || !(container[0].size() == container[1].size() && \
	container[1].size() == container[2].size() && container[2].size() == container[3].size()))
		return ;
	//third create new pairs
	for (size_t i = 0; i < container.size(); i++){
		if ((i + 1) >= container.size() || container[i].size() != container[i + 1].size())
			break ;
		concatenate(container[i], container[i + 1]);
		container.erase(container.begin() + i + 1);
	}
	//loop
	sortVect(container);
	//separate pairs
	size_t size = container[0].size() / 2; // size needed
	for (size_t i = 0; i < container.size(); i += 2){
		if (container[i].size() <= size)
			break ; //nao precisamos de separar mais nada
		container.insert(container.begin() + i + 1, std::vector<int>(container[i].begin() + size, container[i].end()));
		container[i].resize(size); 
	}
	//print();
	//pend every 2 elements
	std::vector<std::vector<int> > pend;
	for (size_t current = 2; current < container.size(); current++){
		if (container[current].size() < container[0].size()) //it doesnt count for this stage
			break ;
		pend.push_back(container[current]);
		container.erase(container.begin() + current);
	}
	while (pend.size()){
		std::vector<int> tmp;
		tmp = pend[0];
		mergeInsertion(container, tmp);
		pend.erase(pend.begin());
		tmp.clear();
	}
	pend.clear();
}


void PmergeMe::sort(void){
	if (vect.size() == 0 || vect.size() != deque.size())
		return ;
	timeVect = clock();
	sortVect(vect);
	if(odd > -1){
		std::vector<int> a;
		a.push_back(odd);
		mergeInsertion(vect, a);
	}
	timeVect = clock() - timeVect;
	// if (isSorted(vect))
	// 	std::cout << "\n\n\n\n\n\n";
	// timeDeque = clock();
	// sortDeque();
	// timeDeque = clock() - timeDeque;
}

void PmergeMe::print(void){
	for (size_t i = 0; i < vect.size(); i++){
		for (size_t j = 0; j < vect[i].size(); j++)
			std::cout << vect[i][j] << " ";
		//std::cout << std::endl;
	}
	std::cout << std::endl;
}


#endif