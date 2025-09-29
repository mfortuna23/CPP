#ifndef SPAN_HPP
#define SPAN_HPP

#include <array>

class Span {
	public :
		std::array<int, 0> arr;
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		addNumber(unsigned int number);
		addMulti(unsigned int *numbers);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		~Span();
} ;

#endif