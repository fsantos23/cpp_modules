#ifndef SCALARMETHOD_HPP
#define SCALARMETHOD_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <sstream>
#include <climits>

class ScalarMethod {
	public:
		ScalarMethod(std::string literal);
		~ScalarMethod(void);
		static void convert(const std::string literal);
};

void toChar(const std::string literal);
void toInt(const std::string literal);
void toFloat(const std::string literal);
void toDouble(const std::string literal);

#endif