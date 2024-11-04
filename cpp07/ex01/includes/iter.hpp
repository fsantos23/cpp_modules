#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename A, typename F>

void iter(A* array, int lenght, F func)
{
	for(int i = 0; i < lenght; ++i)
		func(array[i]);
} 

#endif