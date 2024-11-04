#include "iter.hpp"

void printInt(int x) {
    std::cout << x << std::endl;
}

template <typename T>
void printElement(const T& x) {
    std::cout << x << std::endl;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
    
    std::cout << "Printing integers:" << std::endl;
    iter(intArray, intArrayLength, printInt);

    std::cout << "\nPrinting integers using template function:" << std::endl;
    iter(intArray, intArrayLength, printElement<int>);

    std::string strArray[] = {"Hello", "World", "C++", "Templates"};
    size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "\nPrinting strings:" << std::endl;
    iter(strArray, strArrayLength, printElement<std::string>);

    return 0;
}
