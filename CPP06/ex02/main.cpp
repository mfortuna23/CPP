/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfortuna <mfortuna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:59:45 by mfortuna          #+#    #+#             */
/*   Updated: 2025/09/16 11:22:59 by mfortuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>


Base *generate(void){
	std::srand(std::time(0));
	int x = rand() % 3;
	if (x == 0){
		std::cout << "A class was genereted\n";
		return new A;}
	if (x == 1){
		std::cout << "B class was genereted\n";
		return new B;}
	if (x == 2){
		std::cout << "C class was genereted\n";
		return new C;}
	return NULL;
}

void identify(Base &p){
	int i = 0;
	while (i < 3){
		try {
			switch (i){
				case 0:{
					i++; A a = dynamic_cast<A &>(p); (void)a;
					std::cout << "A class\n"; return ;
				}				
				case 1:{
					i++; B b = dynamic_cast<B &>(p); (void)b;
					std::cout << "B class\n"; return ;
				}				
				case 2:{
					i++; C c = dynamic_cast<C &>(p); (void)c;
					std::cout << "C class\n"; return ;
				}
			}
		}
		catch (std::exception &e ){
			(void)p ;
		}
	}
	std::cout << "Pure base class\n"; 

}

void identify(Base *p){
	A *a = dynamic_cast<A *>(p);
	if (a){
		std::cout << "A class\n"; return ;}	
	B *b = dynamic_cast<B *>(p);
	if (b){
		std::cout << "B class\n"; return ;}	
	C *c = dynamic_cast<C *>(p);
	if (c){
		std::cout << "C class\n"; return ;}
	std::cout << "Pure base class\n"; 
}


int main(void){
	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}