/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:11:46 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/26 08:36:26 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template <class T> void swap(T &a, T &b){
	T c = a;
	a = b;
	b = c;
}

template <class T> T min(const T a, const T b){
	if (a > b)
		return b;
	return a;
}

template <class T> T max(const T a, const T b){
	if (a < b)
		return b;
	return a;
}

#endif