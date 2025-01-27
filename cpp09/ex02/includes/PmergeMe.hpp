#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <sstream>

template <typename Container>
class PmergeMe {
	private:
		Container numbers;

	public:
		PmergeMe(const Container& nums) : numbers(nums) {};
		~PmergeMe() {};
		void fordJohnsonSort()
		{
			if (numbers.size() <= 1) return;
			Container mins, maxs;
			for (typename Container::size_type i = 0; i + 1 < numbers.size(); i += 2)
			{
				if (numbers[i] < numbers[i + 1])
				{
					mins.push_back(numbers[i]);
					maxs.push_back(numbers[i + 1]);
				}
				else
				{
					mins.push_back(numbers[i + 1]);
					maxs.push_back(numbers[i]);
				}
			}

			if (numbers.size() % 2 != 0)
				mins.push_back(numbers.back());
			std::sort(mins.begin(), mins.end());

			for (typename Container::size_type i = 0; i < maxs.size(); ++i)
			{
				typename Container::iterator pos = std::lower_bound(mins.begin(), mins.end(), maxs[i]);
				mins.insert(pos, maxs[i]);
			}

			numbers = mins;
		};
		void display() const
		{
			std::cout << "After: ";
			for (size_t i = 0; i < numbers.size(); ++i)
				std::cout << numbers[i] << " ";
			std::cout << std::endl;
		};
};


#endif