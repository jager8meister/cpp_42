#include "easyfind.hpp"

int	main()
{
	const int	search = 3;

	std::cout << "--------------------------" << std::endl;
	std::cout << "VECTOR" << std::endl;
	{
		std::vector<int>	v;
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
			v.push_back(rand() % 10);
		for (size_t i = 0; i < 10; i++)
		{
			std::cout << v[i] << " ";
		}
		std::cout << std::endl;
		if (easyfind(v, search) != v.end())
			std::cout << search << " is in vector container" << std::endl;
		else
			std::cout << search << " not in vector container" << std::endl;
		// std::cout << *(easyfind(v, search)) << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
	std::cout << "LIST" << std::endl;
	{
		std::list<int>	l;
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
			l.push_back(rand() % 10);
		std::copy(l.begin(), l.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << std::endl;
		if (easyfind(l, 0) != l.end())
			std::cout << search << " is in list container " << std::endl;
		else
			std::cout << search << " not in list container" << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
	std::cout << "DEQUE" << std::endl;
	{
		std::deque<int>	d;
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
			d.push_back(rand() % 10);
		for (size_t i = 0; i < 10; i++)
		{
			std::cout << d[i] << " ";
		}
		std::cout << std::endl;
		if (easyfind(d, 0) != d.end())
			std::cout << search << " is in deque container " << std::endl;
		else
			std::cout << search << " not in deque container" << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
}