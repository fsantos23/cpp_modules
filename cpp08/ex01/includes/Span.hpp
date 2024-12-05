#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <exception>
#include <ctime>
#include <cstdlib>

#define MAX_INT 2147483647
#define MIN_INT -2147483648

class Span
{
	private:
		unsigned int N;
		std::vector<int> v;

	public:
		Span(unsigned int N);
		~Span();

		void addNumber(int value);
		int shortestSpan();
		int longestSpan();
		void createRandomNumbers(int max_value);
};


#endif