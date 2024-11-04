#include "../includes/Array.hpp"

template<typename T>
Array<T>::Array() : array(NULL), n(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), n(n)
{
	for(int i = 0; i < n; i++)
		data[i] = T();
}

template<typename T>
Array<T>::Array(const Array& other) : array(new T[other.n]), n(other.n)
{
	for(int i = 0; i < n; i++)
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
	for(int i = 0; i < n; i++)
		array[i] = other.array[i];
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= arraySize)
		throw std::out_of_range("Index out of bounds");
	return data[index];
}

template<typename T>
Array<T>::~Array()
{
	delete [] array;
}
