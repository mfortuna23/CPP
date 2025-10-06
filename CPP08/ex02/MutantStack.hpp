/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:09:55 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/06 14:51:20 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iterator>
#include <iostream>

# define BLUE "\033[34m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

template<class T>
class MutantStack : public std::stack<T> {
	public :
		typedef typename std::stack<T>::container_type::iterator iterator;
    	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		iterator begin() {return this->c.begin();}
		iterator end()  {return this->c.begin();}
		const_iterator begin() const {return this->c.begin();}
		const_iterator end() const {return this->c.begin();}
} ;

