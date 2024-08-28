#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iomanip>
#include <string>
#include <iostream>
#include <cstdlib>
#include "Data.hpp"

#define uintptr_t unsigned int *

class Serializer {
	private:
		Serializer(void);
		~Serializer(void);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif
