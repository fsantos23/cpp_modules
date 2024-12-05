#include "../includes/Array.hpp"

#define MAX_VAL 750

void test_array()
{
    Array<char> array(5);

    for (int i = 0; i < 5; i++)
        array[i] = i + 65;
    for (int i = 0; i < 5; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}


int main(int, char**)
{
    test_array();
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	Array<int> emptyArray(0);  // Initialize an array of size 0
    try
    {
        int testVal = emptyArray[0]; // Should throw exception
		std::cout << testVal << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error (empty array): " << e.what() << '\n';
    }

    // Test 5: Checking array size
    Array<int> smallArray(5);
    std::cout << "Array size: " << smallArray.size() << std::endl;  // Should output 5

    // Test 7: Ensure that the array is filled with random values
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}