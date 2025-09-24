/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:54:30 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/24 14:05:45 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <exception>

template <typename T>
class Array {
	public :
		T *arr;
		unsigned int size;
		Array<T>(); //creates empty array
		Array<T>(unsigned int n); // creates an array of n elements
		Array<T>(const Array &other);
		Array<T> &operator=(const Array<T> &other);
		T &operator[](unsigned int index);

		class indexOutOfBounds : public std::exception {
			public:
				virtual const char* what() const throw();
		} ;
		~Array<T>();
} ;

template<typename T>
Array<T>::Array(){
	arr = NULL;
	size = 0;
}
template<typename T>
Array<T>::Array(unsigned int n){
	size = n;
	arr = new T[n + 1];
}
template<typename T>
Array<T>::Array(const Array &other){
	*this = other;
}
template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other){
	size = other.size;
	arr = new T[size + 1];
	for (unsigned int i = 0; i < size; i++)
		arr[i] = other.arr[i];
	return *this;
}
template<typename T>
T &Array<T>::operator[](unsigned int index){
	if (index >= size)
		throw indexOutOfBounds() ;
	return arr[index];
}
template<typename T>
Array<T>::~Array(){
	if (arr)
		delete[] arr;
}
template<typename T>
const char* Array<T>::indexOutOfBounds::what() const throw(){

	return "index is out of bounds";
}

#endif