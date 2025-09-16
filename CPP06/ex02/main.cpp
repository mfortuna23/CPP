/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:59:45 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/15 15:15:52 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <iostream>


Base *generate(void){
	std::srand(std::time(0));
	int x = rand() % 3;
	if (x == 0){
		std::cout << "A class A was genereted\n";
		return new A;}
	if (x == 1){
		std::cout << "A class B was genereted\n";
		return new B;}
	if (x == 2){
		std::cout << "A class C was genereted\n";
		return new C;}
	return NULL;
}

// void identify(Base* p){

// 	while (1){
		
// 	}
// 	try {
		
// 	}
// 	catch (std::exception &e ){
// 		(void)p ;
// 	}
// }

// void identify(Base& p);

int main(void){
	Base *base = generate();
	delete base;
	return 0;
}