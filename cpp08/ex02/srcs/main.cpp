#include "../includes/MutantStack.hpp"

int main()
{
    // Basic operations
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "TOP: " << mstack.top() << std::endl; // Should print 17
    mstack.pop();
    std::cout << "SIZE: " << mstack.size() << std::endl; // Should print 1

    // Adding more elements
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Iterator tests
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Iterating through stack:" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl; // Should print all elements in order
        ++it;
    }

    // Testing with another data type
    std::cout << "Testing with std::string:" << std::endl;
    MutantStack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("42");

    for (MutantStack<std::string>::iterator it = stringStack.begin(); it != stringStack.end(); ++it)
        std::cout << *it << std::endl; // Should print: Hello, World, 42

    // Base stack test
    std::cout << "Testing std::stack compatibility:" << std::endl;
    std::stack<int> s(mstack);
    std::cout << "TOP of base stack: " << s.top() << std::endl; // Should print the same top as mstack

    return 0;
}

