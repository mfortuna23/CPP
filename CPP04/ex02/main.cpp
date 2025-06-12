/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:04:03 by mfortuna          #+#    #+#             */
/*   Updated: 2025/06/12 17:43:27 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main (void){
	{
		std::cout << "subject example" << std::endl;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;//should not create a leak
		delete i;
		std::cout << "\n\n" << std::endl;
	}
	{
		std::cout << "AAnimal array" << std::endl;
		AAnimal *pets[8];
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
	return (0);
}