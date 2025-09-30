#include "Span.hpp"


Span::Span(){
	size = 0;
}
Span::Span(unsigned int n){
	size = n;
}
Span::Span(const Span &other){
	*this = other;
}
Span &Span::operator=(const Span &other){
	size = other.size;
	arr = other.arr;
	return *this;
}
void Span::addNumber(unsigned int number){
	if (arr.size() == size)
		throw noSpace();
	arr.push_back(number);
}
void Span::addNumber(unsigned int n, unsigned int *numbers){
	if ((arr.size() + n) > size)
		throw noSpace();
	arr.insert(arr.end(), numbers, numbers + n); // insert (where, start, finish)
}
int Span::shortestSpan(){
	if (arr.size() < 2)
		throw noSpanFound() ;
	return *std::min_element(arr.begin(), arr.end());

}
int Span::longestSpan(){
	if (arr.size() < 2)
		throw noSpanFound() ;
	return *std::max_element(arr.begin(), arr.end());
}

const char* Span::noSpanFound::what() const throw(){
	return "Span not found";
}

const char *Span::noSpace::what() const throw (){
	return "No Space left";
}

Span::~Span(){}