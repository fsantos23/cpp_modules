#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	//falta ver aquilo do wrong cat and wrong dog
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

	delete j;
	delete i;
	delete meta;
    return 0;
}