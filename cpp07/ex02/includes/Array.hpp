#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

//exercicio não acabaddo preciso de perguntar

class Array {
	private:
		T* array;
		unsigned int n;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		T& operator[](unsigned int index);
		int size();
};

#endif