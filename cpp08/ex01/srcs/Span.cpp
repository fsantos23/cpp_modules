#include "../includes/Span.hpp"

Span::Span(unsigned int N) : N(N)
{
}

Span::~Span()
{
}

void Span::addNumber(int value)
{
	try
	{
		if(N < v.size() + 1)
			throw std::exception();
		this->v.push_back(value);
		std::cout << "Added " << value << " to the vector" << '\n'; //comment this if add to many numbers
	}
	catch(const std::exception& e)
	{
		std::cerr << "Vector is already full" << '\n';
	}
}

int Span::shortestSpan()
{
	try
	{
		if(v.size() <= 1)
			throw std::runtime_error("Not enough elements to calculate span");
		std::vector<int> tmp = v;

		std::sort(tmp.begin(), tmp.end());

		int min = MAX_INT;
		for(size_t i = 0; i < tmp.size() - 1; i++)
		{
			if(tmp[i] - tmp[i - 1] < min)
				min = tmp[i] - tmp[i - 1];
		}
		return min;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return -1;
}

int Span::longestSpan()
{
	try
	{
		if(v.size() <= 1)
			throw std::runtime_error("Not enough elements to calculate span");

		int maxElement = *std::max_element(v.begin(), v.end());
    	int minElement = *std::min_element(v.begin(), v.end());

		return maxElement - minElement;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return -1;
}

void Span::createRandomNumbers(int max_value)
{
	if(max_value >= MAX_INT || max_value <= MIN_INT)
	{
		std::cerr << "Max value is too high or too low" << '\n';
		return;
	}
	srand(time(0));
	for(size_t i = 0; i < N; i++)
		addNumber(rand() % max_value);
}