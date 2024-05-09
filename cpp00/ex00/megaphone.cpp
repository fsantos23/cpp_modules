#include <string>
#include <iostream>

void Ft_Captalize(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        std::cout << str[i++];
    }
}

int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        int i = 1;
        while(argv[i])
            Ft_Captalize(argv[i++]);
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}