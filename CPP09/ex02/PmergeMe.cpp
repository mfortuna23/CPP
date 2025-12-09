/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:58:26 by mfortuna          #+#    #+#             */
/*   Updated: 2025/12/09 11:54:26 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<class T, class C>
void insertC(T &container, C &elem, char **av){
	container.clear();
	for (int i = 0; av[i]; i++){
		for (int j = 0; av[i][j]; j++){
			 if (!std::isdigit(av[i][j]))
				throw PmergeMe::NotANumber(); 
		}
		if (std::atol(av[i]) > INT_MAX)
			throw PmergeMe::NotANumber();
		elem.push_back(std::atol(av[i]));
		container.push_back(elem);
		elem.pop_back();
	}
}
template<class T>
void concatenate(T &dest, T &src){
	dest.insert(dest.end(), src.begin(), src.end());
}

template<class T, class C>
void mergeInsertion(T &array, C &elem, size_t max) {
	size_t arraySize = 0;
	for (size_t i = array.size() - 1; i > 0; i--){
		if (array[i].size() == elem.size()){
			arraySize = i;
			break;
		}
	}
	if (max < arraySize)
		arraySize = max;
	size_t size = elem.size() - 1;
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
	return "Recived an invalid number as an argument\n";
}
const char *PmergeMe::NegativeNumber::what() const throw(){
	return "Recived a non positive number as an argument\n";
}
const char *PmergeMe::DefaultConstructor::what() const throw(){
	return "Default constructor called\n";
}

PmergeMe::PmergeMe(char **av){
	std::vector<int> a;
	std::deque<int> b;
	insertC(vect, a, av);
	insertC(deque, b, av);
}

PmergeMe::PmergeMe(){
	throw DefaultConstructor(); 
}
PmergeMe::PmergeMe(const PmergeMe &other){
			*this = other;}
PmergeMe &PmergeMe::operator=(const PmergeMe &other){
			vect = other.getVect();
			deque = other.getDeque();
			return *this;
		}
PmergeMe::~PmergeMe(){};
std::vector<std::vector<int> > PmergeMe::getVect() const {return vect;}
std::deque<std::deque<int> > PmergeMe::getDeque() const {return deque;}


int jacobsNumber(int n){
	return round((pow(2, n + 1) + pow(-1, n)) / 3);
}

template<class T>
void pending(T &container){
	T pend;
	for (size_t current = 2; current < container.size(); current++){
		if (container[current].size() < container[0].size()) //it doesnt count for this stage
			break ;
		pend.push_back(container[current]);
		container.erase(container.begin() + current);
	}
	if (pend.size() == 0)
		return ;
	size_t lastJacob = 0, currJacob = 0, index = 0, added = 0;
	mergeInsertion(container, pend[0], 2);
	for (int k = 0; lastJacob < pend.size(); k++){
		if (currJacob >= pend.size())
			index = pend.size() - 1;
		else
			index = currJacob;
		for(; index >= 0; index--){
			if (index <= lastJacob)
				break ;
			mergeInsertion(container, pend[index], index + 2 + added);
			//std::cout << "mid insertion is :" << pend[index][pend[index].size() - 1] << std::endl;
			added++;
		}
		lastJacob = currJacob;
		currJacob = jacobsNumber(k);
		//std::cout << currJacob << std::endl;
	}
	pend.clear();
}

template <class T, class C>
void sorting(T &container, C elem){
	size_t index = container[0].size() - 1; // we compare the last element
	//first compare pairs and swap when needed
	for (size_t i = 1; i < container.size(); i+= 2){
		if (container[i - 1].size() < container[0].size() || container[i].size() < container[0].size())
			break ; // can't compare diferent sized containers
		if (container[i - 1][index] > container[i][index])
			std::swap(container[i - 1], container[i]);
	}
	//second check if we keep doing pairs
	if (container.size() < 2 || container[1].size() != container[0].size())
		return ;
	//third create new pairs
	for (size_t i = 0; i < container.size(); i++){
		if ((i + 1) >= container.size() || container[i].size() != container[i + 1].size())
			break ;
		concatenate(container[i], container[i + 1]);
		container.erase(container.begin() + i + 1);
	}
	//loop
	sorting(container, elem);
	//separate pairs
	size_t size = container[0].size() / 2; // size needed
	for (size_t i = 0; i < container.size(); i += 2){
		if (container[i].size() <= size)
			break ; //We dont need to separate more
		container.insert(container.begin() + i + 1, C(container[i].begin() + size, container[i].end()));
		container[i].resize(size); 
	}
	pending(container);
}

void PmergeMe::sort(void){
	if (vect.size() == 0 || vect.size() != deque.size())
		return ;
	timeVect = clock();
	sorting(vect, std::vector<int>());
	timeVect = clock() - timeVect;
	timeDeque = clock();
	sorting(deque, std::deque<int>());
	timeDeque = clock() - timeDeque;
}

void PmergeMe::print(void){
	for (size_t i = 0; i < vect.size(); i++){
		for (size_t j = 0; j < vect[i].size(); j++)
			std::cout << vect[i][j] << " ";
		//std::cout << std::endl;
	}
	std::cout << std::endl;
}
