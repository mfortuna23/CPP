#include <iostream>
#include <Array.hpp>

typedef struct a{
	int value;
} a;

int main()
{
	try {
		Array<int> numbers(10);
		srand(time(NULL));
		for (int i = 0; i < 10; i++){
			numbers[i] = rand();
			std::cout << numbers[i] << ", ";
		}
		std::cout << std::endl;
		Array<char> chars(13);
		char arr[] = "abcdefghijklm";
		for(int i = 0; arr[i]; i++){
			chars[i] = arr[i];
			std::cout << chars[i] << ", ";
		}
		std::cout << std::endl;
		Array<std::string> str(13);
		for(int i = 0; i < 13; i++){
			str[i] = arr;
			std::cout << str[i] << ", ";
		}
		std::cout << std::endl;
		Array<a> a_t(13);
		for(int i = 0; i < 13; i++){
			a_t[i].value =rand();
			std::cout << a_t[i].value << ", ";
		}
		std::cout << std::endl;

	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}

    return 0;
}