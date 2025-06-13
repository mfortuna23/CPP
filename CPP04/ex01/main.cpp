/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:04:03 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/13 10:51:43 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main (void){
	{
		std::cout << "subject example" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
		std::cout << "\n\n" << std::endl;
	}
	{
		std::cout << "Animal array" << std::endl;
		Animal *pets[8];
		for (int i = 0; i < 8; i++){
			if (i % 2 == 0)
				pets[i] = new Cat();
			else
				pets[i] = new Dog();
		}
		for (int i = 0 ; i < 8; i++){
			delete pets[i];
		}
		std::cout << "\n\n" << std::endl;
	}
	{
		Cat *meow = new Cat();
		meow->addIdeas("123");
		Cat *two = new Cat(*meow);
		two->addIdeas("456");
		meow->printIdeas();
		two->printIdeas();
		meow->printIdeas();
		delete meow;
		two->printIdeas();
		delete two;		
	}

	{
		Dog basic;
		{
		Dog tmp;
		basic = tmp;
		tmp.printIdeas();
		}
		basic.printIdeas();
	}
	return (0);
}