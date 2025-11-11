/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:58:26 by mfortuna          #+#    #+#             */
/*   Updated: 2025/11/11 16:36:40 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

void PmergeMe::print(void){
	for (size_t y = 0; y < vect.size(); y++){
		for (size_t x = 0; x < vect[y].size(); x++){
			std::cout << vect[y][x];
			if (x + 1 < vect[y].size())
				std::cout << " ";
		}
		std::cout << " ";
	}
	for (size_t y = 0; y < deque.size(); y++){
		for (size_t x = 0; x < deque[y].size(); x++){
			std::cout << deque[y][x];
			if (x + 1 < deque[y].size())
				std::cout << " ";
		}
		std::cout << " ";
	}
	std::cout << std::endl;
}

PmergeMe::PmergeMe(std::vector<int> a){
	odd = -1;
	vect.push_back(a);
}

PmergeMe::PmergeMe(std::deque<int> a){
	odd = -1;
	deque.push_back(a);
}

PmergeMe::PmergeMe(){
	throw DefaultConstructor(); 
}
PmergeMe::PmergeMe(const PmergeMe &other){
			*this = other;}
PmergeMe &PmergeMe::operator=(const PmergeMe &other){
			vect = other.vect;
			deque = other.deque;
			odd = other.odd;
			return *this;
		}
PmergeMe::~PmergeMe(){};

void PmergeMe::insertVect(char **av){
	vect.clear();
	for (int i = 0; av[i]; i++){
		for (int j = 0; av[i][j]; j++){
			 if (!std::isdigit(av[i][j]))
				throw NotANumber(); 
		}
		std::vector<int> ins;
		ins.push_back(std::atol(av[i]));
		if (find(vect.begin(), vect.end(), ins) == vect.end())
			vect.push_back(ins);
		else //duplicates
			throw DuplicatedNumber(); 
		}
}

void PmergeMe::insertdeque(char **av){
	deque.clear();
	for (int i = 0; av[i]; i++){
		for (int j = 0; av[i][j]; j++){
			if (av[i][j] < '0' || av[i][j] > '9')
				throw NotANumber();
		}
		std::deque<int> ins;
		ins.push_back(std::atol(av[i]));
		if (find(deque.begin(), deque.end(), ins) == deque.end())
			deque.push_back(ins);
		else //duplicates
			throw DuplicatedNumber();
		}
}

void PmergeMe::insert(char **av){
	if (vect.empty())
		insertdeque(av);
	else
		insertVect(av);
}

void PmergeMe::sort(void){
	if (deque.empty())
		sortVect();
	else
		sortDeque();
}

// template<class T, class C>
// void mergeInsertion(T &array, C &elem){
// 	std::cout << elem[elem.size() - 1] << std::endl;
// 	size_t arraySize = 0;
// 	for (size_t i = array.size() - 1; i > 0; i--){
// 		if (array[i].size() == elem.size()){
// 			arraySize = i;
// 			break;
// 		}
// 	}
// 	size_t mid = arraySize / 2;
// 	size_t size = elem.size() - 1;
// 	typename T::iterator it_b = array.begin();
// 	typename T::iterator it_m = array.begin() + mid;
// 	typename T::iterator it_e = array.begin() + arraySize;
	
// 	while (mid > 0){
// 		if (it_b[0][size] > elem[elem.size() - 1]){
// 			it_m = it_b; break ;
// 		}
// 		if (it_e[0][size] < elem[elem.size() - 1]){
// 			it_m = it_e; break ;
// 		}
// 		mid /= 2;
// 		if (it_m[0][size] < elem[elem.size() - 1]){
// 			it_b = it_m;
// 			it_m += mid ;
// 		}
// 		else{
// 			it_e = it_m;
// 			it_m -= mid ;
// 		}
// 	}
// 	if (it_m[0][size] < elem[elem.size() - 1])
// 		it_m++;
// 	array.insert(it_m, elem);
// 	elem.clear();
// }

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

void PmergeMe::sortVect(void){
	// if (isSorted(vect))
	// 	return ;
	if ((vect.size() % 2) != 0){ // easier to work with paired i guess ...
		odd = vect[vect.size() - 1][0];
		vect.pop_back();
	}
	makepairsVect();
	if (odd == -1)
		return ;
	std::cout << "saved number: "<< odd << std::endl;
	std::vector<int> elem;
	elem.push_back(odd);
	mergeInsertion(vect, elem);
	if (isSorted(vect))
		std::cout << "\n\n\n\n\n\n\n";
}

void PmergeMe::sortDeque(void){
	// if (isSorted(deque))
	// 	return ;
	if ((deque.size() % 2) != 0){ // easier to work with paired i guess ...
		odd = deque[deque.size() - 1][0];
		deque.pop_back();
	}
	while (makepairsDeque());
	while (undopairsDeque());
	if (odd == -1)
		return ;
	std::deque<int> elem;
	elem.push_back(odd);
	mergeInsertion(deque, elem);
}

template<class T>
void concatenate(T &dest, T &src){
	dest.insert(dest.end(), src.begin(), src.end());
}

void PmergeMe::makepairsVect(void){ //first part
	if (vect.empty() || vect[0].empty())
		return ; // or maybe throw
	size_t size = vect[0].size(); // what i need
	for (size_t i = 0; i < vect.size(); i++){
		if (vect[i].size() < size || (i + 1) == vect.size())
			break ; // all pars for this stage completed
		//std::cout << vect[i][vect[i].size() - 1] << "   " << vect[i + 1][vect[i + 1].size() - 1] << std::endl;
		if (vect[i][vect[i].size() - 1] > vect[i + 1][vect[i + 1].size() - 1]){
			concatenate(vect[i + 1], vect[i]);
			vect.erase(vect.begin() + i);
		} else {
			concatenate(vect[i], vect[i + 1]);
			vect.erase(vect.begin() + i + 1);
		}
	}
	if (vect.size() == 1 || vect[0].size() > vect[1].size())
		return ;
	makepairsVect();
	std::vector<std::vector<int> > pend;
	for (size_t current = 2; current < vect.size(); current++){
		if (vect[current].size() < vect[0].size()) //it doesnt count for this stage
			break ;
		pend.push_back(vect[current]);
		vect.erase(vect.begin() + current);
	}
	
	while (pend.size()){
		std::vector<int> tmp;
		tmp = pend[0];
		mergeInsertion(vect, tmp);
		pend.erase(pend.begin());
		tmp.clear();
		// for (size_t i = 0; i < vect.size(); i++){
		// 	if (vect[i][vect[i].size() - 1] > pend[0][pend[0].size() - 1] || vect[i + 1].size() < size){
		// 		vect.insert(vect.begin() + i, pend[0]);
		// 		
		// 		break ;
		// 	}
		// }
	}
	pend.clear();
}

bool PmergeMe::makepairsDeque(void){
	if (deque.empty() || deque[0].empty())
		return false ; // or maybe throw
	size_t size = deque[0].size(); // what i need
	for (size_t i = 0; i < deque.size(); i++){
		if (deque[i].size() < size || (i + 1) == deque.size())
			return true; // all pars for this stage completed
		//std::cout << deque[i][deque[i].size() - 1] << "   " << deque[i + 1][deque[i + 1].size() - 1] << std::endl;
		if (deque[i][deque[i].size() - 1] > deque[i + 1][deque[i + 1].size() - 1]){
			concatenate(deque[i + 1], deque[i]);
			deque.erase(deque.begin() + i);
		} else {
			concatenate(deque[i], deque[i + 1]);
			deque.erase(deque.begin() + i + 1);
		}
	}
	if (deque.size() == 1 || deque[0].size() > deque[1].size())
		return false ;
	return true ;
}

bool PmergeMe::undopairsVect(void){
	//split pars
	//consider first size as reference
	//first 2 pairs stay, every 2 pars out in pending matrix
	if (vect.empty() || vect[0].empty())
		return false ; // or maybe throw
	if (vect[0].size() == 1)
		return false; //we are done
	size_t size = vect[0].size() / 2; // what i need
	std::vector<std::vector<int> > pend;
	//std::vector<int> tmp; //holds the moving pair
	for (size_t i = 0; i < vect.size(); i += 2){
		if (vect[i].size() <= size)
			break ; //nao precisamos de separar mais nada
		// while (vect[i].size() > size){ //until we reach what we need
		// 	tmp.insert(tmp.begin(), vect[i][vect[i].size() -1]);
		// 	vect[i].pop_back();
		// }
		vect.insert(vect.begin() + i + 1, std::vector<int>(vect[i].begin() + size, vect[i].end()));
		vect[i].resize(size); 
	}
	//first 2 pairs stays, one goes other stays...
	for (size_t current = 2; current < vect.size(); current++){
		if (vect[current].size() < size) //it doesnt count for this stage
			break ;
		pend.push_back(vect[current]);
		vect.erase(vect.begin() + current);
	}
	
	while (pend.size()){
		std::vector<int> tmp;
		tmp = pend[0];
		mergeInsertion(vect, tmp);
		pend.erase(pend.begin());
		tmp.clear();
		// for (size_t i = 0; i < vect.size(); i++){
		// 	if (vect[i][vect[i].size() - 1] > pend[0][pend[0].size() - 1] || vect[i + 1].size() < size){
		// 		vect.insert(vect.begin() + i, pend[0]);
		// 		
		// 		break ;
		// 	}
		// }
	}
	pend.clear();
	return true;
}

bool PmergeMe::undopairsDeque(void){
	//split pars
	//consider first size as reference
	//first 2 pairs stay, every 2 pars out in pending matrix
	if (deque.empty() || deque[0].empty())
		return false ; // or maybe throw
	if (deque[0].size() == 1)
		return false; //we are done
	size_t size = deque[0].size() / 2; // what i need
	std::deque<std::deque<int> > pend;
	std::deque<int> tmp; //holds the moving pair
	for (size_t i = 0; i < deque.size(); i += 2){
		if (deque[i].size() <= size)
			break ; //nao precisamos de separar mais nada
		while (deque[i].size() > size){ //until we reach what we need
			tmp.insert(tmp.begin(), deque[i][deque[i].size() -1]);
			deque[i].pop_back();
		}
		deque.insert(deque.begin() + i + 1, tmp);
		tmp.clear();
	}
	//first 2 pairs stays, one goes other stays...
	for (size_t current = 2; current < deque.size(); current++){
		if (deque[current].size() < size) //it doesnt count for this stage
			break ;
		pend.push_back(deque[current]);
		deque.erase(deque.begin() + current);
	}
	while (pend.size()){
		for (size_t i = 0; i < deque.size(); i++){
			if (deque[i][deque[i].size() - 1] > pend[0][pend[0].size() - 1] || deque[i + 1].size() < size || i + 1 == deque.size()){
				deque.insert(deque.begin() + i, pend[0]);
				pend.erase(pend.begin());
				break ;
			}
		}
	}
	return true;
}