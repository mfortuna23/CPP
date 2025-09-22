/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:21:47 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/22 11:48:49 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <class T, typename Fnc> void iter(T &arr, size_t size, Fnc f){
	for (size_t i = 0; i < size; i++)
		f(arr[i]);
}


#endif