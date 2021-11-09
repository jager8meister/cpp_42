#include "span.hpp"

int main()
{
	try
	{
		unsigned int size = 10001;
		Span u(size);
		u.addRangeOfNumbers(0, 10000);
		// u.addRangeOfNumbers(-99, 10000, -4);
		/*
		u.addNumber(3);
		u.addNumber(78);
		u.addNumber(3);
		u.addNumber(4);
		*/
		std::cout << u.shortestSpan() << std::endl;
		std::cout << u.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

/*
int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
*/
