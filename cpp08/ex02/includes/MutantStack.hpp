#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template <typename T, typename Container = std::deque<T > >

class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() : std::stack<T, Container>() {};
		MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {};
		MutantStack &operator=(const MutantStack &other)
		{
			if(this == &other)
				return *this;
			this->c = other.c;
			return *this;
		}
		~MutantStack() {};

		typedef typename Container::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif