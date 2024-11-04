#include "../includes/Serializer.hpp"

int is_number(std::string word)
{
	for(unsigned int i = 0; i < word.length(); i++)
	{
		if(!std::isdigit(word[i]))
			return 1;
	}
	return 0;
}

int is_alpha(std::string word)
{
	for(unsigned int i = 0; i < word.length(); i++)
	{
		if(!std::isalpha(word[i]))
			return 1;
	}
	return 0;
}

int main (int ac, char **av)
{
	if(ac != 3 || is_alpha(av[1]) || is_number(av[2]))
	{
		std::cout << "usage: ./Serializer <name> <id>" << std::endl;
		return 1;
	}
	Data* d = new Data;
	d->id = std::atoi(av[2]);
	d->name = av[1];

	uintptr_t serialized = Serializer::serialize(d);
	Data *deserialized = Serializer::deserialize(serialized);

	std::cout << serialized << std::endl;
	std::cout << deserialized->id << ": "<< deserialized->name << std::endl;
	delete d;
	return 0;
}