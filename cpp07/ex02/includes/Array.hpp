#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
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

template<typename T>
Array<T>::Array() : array(NULL), n(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), n(n)
{
	for(unsigned int i = 0; i < n; i++)
		array[i] = T();
}

template<typename T>
Array<T>::Array(const Array& other) : array(new T[other.n]), n(other.n)
{
	for(unsigned int i = 0; i < n; i++)
		array[i] = other.array[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this == &other)
		return *this;
	delete [] array;
	array = new T[other.n];
	n = other.n;
	for(unsigned int i = 0; i < n; i++)
		array[i] = other.array[i];
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= n)
		throw std::out_of_range("Index out of bounds");
	return array[index];
}

template<typename T>
Array<T>::~Array()
{
	delete [] array;
}

template<typename T>
int Array<T>::size()
{
	return n;
}


#endif