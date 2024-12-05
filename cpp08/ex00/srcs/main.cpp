#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try {
        // Correct type for iterator
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Value not found in vector!" << std::endl;
    }

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    try {
        // Correct type for iterator
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Value not found in list!" << std::endl;
    }

    return 0;
}


