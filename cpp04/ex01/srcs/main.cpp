#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	// const int arraySize = 10;
	// const Animal* animals[arraySize];

	// for (int i = 0; i < arraySize / 2; ++i)
	// {
	// 	animals[i] = new Dog();
	// 	animals[i]->makeSound();
	// }
	// for (int i = arraySize / 2; i < arraySize; ++i)
	// {
	// 	animals[i] = new Cat();
	// 	animals[i]->makeSound();
	// }
	// for (int i = 0; i < arraySize; ++i)
	// 	delete animals[i];
	// return 0;

	Animal *cat = new Cat();
	Animal *dog = new Dog();

	std::cout << cat->getIdea() << std::endl;
	std::cout << "HERE" << std::endl;

	std::cout << dog->getIdea() << std::endl;

	delete cat;
	delete dog;
}