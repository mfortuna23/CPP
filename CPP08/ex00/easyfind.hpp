/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:59:10 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/30 14:02:56 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <exception>

template<class T> typename T::iterator easyfind(T container, int value){
	typename T::iterator it = find(container.begin(), container.end(), value);
	if(it == container.end())
		throw 3;
	return it;
	
}

#endif