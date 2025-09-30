#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <exception>

class Span {
	public :
		std::vector<int> arr;
		unsigned int size;
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		void addNumber(unsigned int number);
		void addNumber(unsigned int n, unsigned int *numbers);
		int shortestSpan();
		int longestSpan();
		class noSpanFound : public std::exception {
			virtual const char* what() const throw();
		} ;
		class noSpace : public std::exception {
			virtual const char* what() const throw();
		} ;
		~Span();
} ;

#endif