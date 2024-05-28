#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	const int arraySize = 10;
	const Animal* animals[arraySize];

	for (int i = 0; i < arraySize / 2; ++i)
	{
		animals[i] = new Dog();
		animals[i]->makeSound();
	}
	for (int i = arraySize / 2; i < arraySize; ++i)
	{
		animals[i] = new Cat();
		animals[i]->makeSound();
	}
	for (int i = 0; i < arraySize; ++i)
		delete animals[i];

	std::cout << "/--------------------------- other tests for deep copy -----------------------/" << std::endl;
	Cat *cat = new Cat();
	Cat *tmp = new Cat();

	std::cout << "TMP: "<< tmp->getIdea() << std::endl;
	tmp->setIdea("New idea");
	std::cout << "TMP: "<< tmp->getIdea() << std::endl;
	//tmp should print new idea
	std::cout << "CAT: "<< cat->getIdea() << std::endl;

	*cat = *tmp;

	std::cout << "CAT: " << cat->getIdea() << std::endl;
	std::cout << RED << "cat should now print new idea" << RESET << std::endl;
	tmp->setIdea("other one dj khaled!");
	std::cout << "TMP: "<< tmp->getIdea() << std::endl;
	std::cout << RED << "cat shouldn't change its value when setting an new idea" << RESET << std::endl;
	std::cout << "CAT: " << cat->getIdea() << std::endl;

	delete tmp;
	delete cat;
}