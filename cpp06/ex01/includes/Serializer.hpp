#ifndef SERIALIZER_HPP

#include <iomanip>
#include <string>
#include "Data.hpp"

class Serializer {
	private:
		Serializer(void);
		~Serializer(void);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif
