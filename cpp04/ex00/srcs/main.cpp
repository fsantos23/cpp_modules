#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
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

	const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* h = new WrongCat();
	const WrongCat* right = new WrongCat();
    std::cout << h->getType() << " " << std::endl;
    h->makeSound();
    wrong->makeSound();
	right->makeSound();

	delete right;
	delete h;
	delete wrong;
    return 0;
}