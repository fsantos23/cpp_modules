#include "../includes/PmergeMe.hpp"

int checkDup(int num, std::deque<int> deq)
{
	if (std::find(deq.begin(), deq.end(), num) != deq.end())
	{
		std::stringstream ss;
        ss << "\nDuplicate argument: " << num;
        throw std::invalid_argument(ss.str());
	}
	return 1;
}

int isNumber(std::string str)
{
	if (str.empty())
		return 0;
	size_t start = (str[0] == '-' && str[1]) ? 1 : 0;
	if	(start == 1)
		return 0;
	for (size_t i = start; i < str.length(); ++i)
	{
		if (!isdigit(str[i]))
			return 0;
	}
	return 1;
}


int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Usage: ./PmergeMe [num1] [num2] [num3] ..." << std::endl;
		return 1;
	}
	try {

		std::deque<int> deq;
		std::cout << "Before: ";
		for (int i = 1; i < ac; ++i)
		{
			std::cout << av[i] << " ";
			if(isNumber(av[i]) && checkDup(std::atoi(av[i]), deq))
				deq.push_back(std::atoi(av[i]));
			else
			{
				std::stringstream ss;
        		ss << "\nInvalid argument: " << av[i];
        		throw std::invalid_argument(ss.str());
			}
		}
		std::cout << std::endl;
	
		PmergeMe<std::deque<int > > d(deq);
		clock_t startDeque = clock();
		d.fordJohnsonSort();
		d.display();
		clock_t endDeque = clock();
	
		std::vector<int> vec;
		for (int i = 1; i < ac; ++i)
			vec.push_back(std::atoi(av[i]));
		
		PmergeMe<std::vector<int > > v(vec);
		clock_t startVector = clock();
		v.fordJohnsonSort();
		clock_t endVector = clock();
		
		std::cout << "Time to sort using std::vector: "
			<< static_cast<float>(endVector - startVector) / CLOCKS_PER_SEC
			<< " seconds." << std::endl;
	
		std::cout << "Time to sort using std::deque: "
			<< static_cast<float>(endDeque - startDeque) / CLOCKS_PER_SEC
			<< " seconds." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}