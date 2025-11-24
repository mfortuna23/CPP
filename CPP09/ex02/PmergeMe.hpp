/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:06:26 by mfortuna          #+#    #+#             */
/*   Updated: 2025/11/24 16:08:56 by mfortuna         ###   ########.fr       */
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
		if (other[y][0] < tmp){
			std::cout << "\n\n" << tmp << "is bigger than " << other[y][0] << std::endl;
			return false;
		}
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
void mergeInsertion(T &array, C &elem, size_t max) {
		// std::cout << elem[elem.size() - 1] << std::endl;
	size_t arraySize = 0;
	for (size_t i = array.size() - 1; i > 0; i--){
		if (array[i].size() == elem.size()){
			arraySize = i;
			break;
		}
	}
	if (max < arraySize)
		arraySize = max;
	//size_t mid = arraySize / 2;
	size_t size = elem.size() - 2;
	if (size == static_cast<size_t>(-1))
		size = 0;
    typename T::iterator left = array.begin();
    typename T::iterator right = array.begin() + arraySize + 1;
    
    while (left < right) {
        typename T::iterator mid = left + (right - left) / 2;
        if ((*mid)[size] < elem[size])
            left = mid + 1;
        else
            right = mid;
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


int jacobsNumber(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	return jacobsNumber(n - 1) + 2 * jacobsNumber(n - 2);
}

template<class T>
void pending(T &container){
	for (size_t i = 0; container.size() > i; i++)
		container[i].push_back(i);
	//pend every 2 elements aka all b elements minus the first
	T pend;
	for (size_t current = 2; current < container.size(); current++){
		if (container[current].size() < container[0].size()) //it doesnt count for this stage
			break ;
		pend.push_back(container[current]);
		container.erase(container.begin() + current);
	}
	//add from pend acoording to jacobs law
	int jacobsIdx = 3; 
	size_t index = 0;
	size_t inserted_count = 0;
	size_t pend_size = pend.size();
	
	while (inserted_count < pend_size){
		int currJacobs = jacobsNumber(jacobsIdx);
		size_t n_to_insert = currJacobs - jacobsNumber(jacobsIdx - 1);
		if (n_to_insert > pend.size())
			n_to_insert = pend.size();
		size_t right_bound = n_to_insert;
		for (size_t k = 0; k < n_to_insert; k++) {
			index = right_bound - 1 - k;
			mergeInsertion(container, pend[index], pend[index][pend[index].size() - 1] + k);
			pend.erase(pend.begin() + index);
			inserted_count++;
		}
		jacobsIdx++;
	}
	//remove their number
	for (size_t i = 0; container.size() > i; i++)
		container[i].pop_back();
	pend.clear();
}

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
	//print();
	//second check if we keep doing pairs
	if (container.size() < 2)
		return ;
	//third create new pairs
	for (size_t i = 0; i < container.size(); i++){
		if ((i + 1) >= container.size() || container[i].size() != container[i + 1].size())
			break ;
		concatenate(container[i], container[i + 1]);
		container.erase(container.begin() + i + 1);
	}
	
	std::vector<int> odd_pair;
	bool has_odd = false;
	if (container.size() > 0 && container.back().size() != container[0].size()) {
		odd_pair = container.back();
		container.pop_back();
		has_odd = true;
	}
	
	//loop
	sortVect(container);
	
	if (has_odd) {
		container.push_back(odd_pair);
	}
	//separate pairs
	size_t size = container[0].size() / 2; // size needed
	for (size_t i = 0; i < container.size(); i += 2){
		if (container[i].size() <= size)
			break ; //nao precisamos de separar mais nada
		container.insert(container.begin() + i + 1, std::vector<int>(container[i].begin() + size, container[i].end()));
		container[i].resize(size); 
	}
	//print();
	pending(container);
	//give every pair their number
}


void PmergeMe::sort(void){
	if (vect.size() == 0 || vect.size() != deque.size())
		return ;
	timeVect = clock();
	sortVect(vect);
	//pending(vect);
	if(odd > -1){
		std::vector<int> a;
		a.push_back(odd);
		mergeInsertion(vect, a, vect.size());
	}
	timeVect = clock() - timeVect;
	if (isSorted(vect))
		std::cout << "\n\n\n\n\n\n";
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