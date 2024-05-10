#include "../includes/Zombie.hpp"

void Zombie::Zombie(void)
{

}

void Zombie::~Zombie(void)
{
    std::cout << "Zombie destroyed" << std::endl;
}

void printInput(void)
{
    std::cout << "Choose an option" << std::endl;
    std::cout << "1 = create a Zombie" << std::endl;
    std::cout << "2 = create a Zombie and call it" << std::endl;
    std::cout << "3 = to exit" << std::endl;
}

std::string chooseName(void)
{
    std::string name;

    std::cout << "Please choose a name for the zombie" << std::endl;
    std::getline(std::cin, name);
    return name;
}

int main()
{
    std::string option;
    Zombie zombie;
    while(1)
    {
        printInput();
        std::getline(std::cin, option);
        std::cout << "\033[2J\033[1;1H";
        if (option == '1')
            zombie = newZombie(chooseName());
        if(option == '2')
        {
            //ver o que falta fazer aqui para chamar o zombie criado
            zombie = newZombie(chooseName())
            randomChump(zombie::getZombie());
        }
        if(option == '3')
            return 0;
    }
}