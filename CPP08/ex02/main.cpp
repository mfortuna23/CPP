/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:14:53 by mfortuna          #+#    #+#             */
/*   Updated: 2025/10/06 14:25:35 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list> // MutantStack should behave like list

int main()
{
	{
		std::cout << "subject\n";
		MutantStack<int> mstack;
		std::list<int> lstack;
		lstack.push_back(5);
		mstack.push(5);
		lstack.push_back(17);
		mstack.push(17);
		std::cout << CYAN << "MUTANTSTACK TOP:" << mstack.top() << RESET << std::endl;
		std::cout << "LIST TOP:       " << lstack.back() << std::endl;
		mstack.pop();
		lstack.pop_front();
		std::cout << CYAN << "MUTANTSTACK SIZE:" << mstack.size() << RESET << std::endl;
		std::cout << "LIST SIZE:       " << lstack.size() << std::endl;
		mstack.push(3);
		lstack.push_back(3);
		mstack.push(5);
		lstack.push_back(5);
		mstack.push(737);
		lstack.push_back(737);
		//[...]
		mstack.push(0);
		lstack.push_back(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::list<int>::iterator it_l = lstack.begin();
		std::list<int>::iterator ite_l = lstack.end();
		++it;
		--ite;
		++it_l;
		--ite_l;
		while ((it != ite) && (it_l != ite_l))
		{
			std::cout << CYAN << "MUTANTSTACK :" << RESET << *it << std::endl;
			std::cout << "LIST :       " << *it_l << std::endl;
			++it;
			++it_l;
		}
	}
	{
		std::cout << "my test\n";	
		MutantStack<int> mstack;
		std::list<int> lstack;
		lstack.push_back(5);
		mstack.push(5);
		lstack.push_back(17);
		mstack.push(17);
		std::cout << CYAN << "MUTANTSTACK TOP:" << mstack.top() << RESET << std::endl;
		std::cout << "LIST TOP:       " << lstack.back() << std::endl;
		mstack.push(3);
		lstack.push_back(3);
		mstack.push(5);
		lstack.push_back(5);
		mstack.push(737);
		lstack.push_back(737);
		mstack.push(0);
		lstack.push_back(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::list<int>::iterator it_l = lstack.begin();
		std::list<int>::iterator ite_l = lstack.end();
		++it;
		--ite;
		++it_l;
		--ite_l;
		while ((it != ite) && (it_l != ite_l))
		{
			std::cout << CYAN << "MUTANTSTACK :" << RESET << *it << std::endl;
			std::cout << "LIST :       " << *it_l << std::endl;
			++it;
			++it_l;
		}
		std::stack<int> s(mstack);
	}
	return 0;
}