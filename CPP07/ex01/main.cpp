#include "iter.hpp"
#include <iostream>

void upper(char &c){
	c = std::toupper(c);
}

void lower(char &c){
	c = std::tolower(c);
}

void up(int &i){
	i++;
}

void down(int &i){
	i--;
}



int main(void){
	char a[] = "abcdefghijklmnop";
	int	i[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	iter(a, 10, upper);
	std::cout << a << std::endl;
	iter(a, 5, lower);
	std::cout << a << std::endl;
	for(int x = 0; x < 9; x++){
		if (x == 8){
			std::cout << i[x] << std::endl; break;}
		std::cout << i[x] << ", ";
	}
	iter(i, 9, up);
	iter(i, 9, up);
	iter(i, 9, up);
	iter(i, 9, up);
	for(int x = 0; x < 9; x++){
		if (x == 8){
			std::cout << i[x] << std::endl; break;}
		std::cout << i[x] << ", ";
	}
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	iter(i, 9, down);
	for(int x = 0; x < 9; x++){
		if (x == 8){
			std::cout << i[x] << std::endl; break;}
		std::cout << i[x] << ", ";
	}

}