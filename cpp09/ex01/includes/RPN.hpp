#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <iostream>
#include <sstream>
#include <stdexcept>


class RPN {
	private:
		std::stack<int> _stack;

	public:
		RPN();
		~RPN();

		void calculate(std::string str);
		int isNumber(std::string str);
		void operate(std::string str);
};

#endif