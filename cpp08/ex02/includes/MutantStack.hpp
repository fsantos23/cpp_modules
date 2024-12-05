#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template <typename T, typename Container = std::deque<T > >

class MutantStack : public std::stack<T, Container>
{
	public:
		using typename std::stack<T, Container>::container_type;
    	using typename std::stack<T, Container>::value_type;
    	using typename std::stack<T, Container>::size_type;

		MutantStack() : std::stack<T, Container>() {};
		~MutantStack() {};

		typedef typename Container::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif