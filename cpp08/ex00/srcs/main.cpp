#include "easyfind.hpp"

#include "easyfind.hpp"

int main() {
    // Test with a vector
    std::vector<int> vec = {1, 2, 3, 4, 5};

    try {
        std::cout << "Looking for 3 in vector: ";
        int it = easyfind(vec, 3);
        std::cout << "Found: " << it << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "Looking for 10 in vector: ";
        easyfind(vec, 10); 
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // Test with a list
    std::list<int> lst = {10, 20, 30, 40, 50};

    try {
        std::cout << "Looking for 20 in list: ";
        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "Looking for 100 in list: ";
        easyfind(lst, 100);  // This will throw
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

