#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	srand(static_cast<unsigned int>(time(0)));
	int random = rand() % 3;

	if(random == 0)
	{
		std::cout << "A generated" << std::endl;
		return new A();
	}
	if(random == 1)
	{
		std::cout << "B generated" << std::endl;
		return new B();
	}
	if(random == 2)
	{
		std::cout << "C generated" << std::endl;
		return new C();
	}
	return NULL;
}

void identify(Base *p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (...) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (...) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (...) {}
}

int main ()
{
	Base *base;
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}