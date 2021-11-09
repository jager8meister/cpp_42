#include "mutantstack.hpp"


int	main()
{
	srand(time(NULL));
	MutantStack<int> orig;
	for (size_t i = 0; i < 20; i++)
	{
		orig.push(rand() % 1000);
	}
	std::cout << "______________________________________" << std::endl;
	std::cout << "ITERATOR" << std::endl;
	{
		MutantStack<int> mstack(orig);
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		for (MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
		{
			std::cout << *i << " ";
		}
		std::cout << std::endl;
		for (MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
		{
			*i = 9;
		}
		for (MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
		{
			std::cout << *i << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "______________________________________" << std::endl;
	std::cout << "REVERSE ITERATOR" << std::endl;
	{
		MutantStack<int> mstack(orig);
		std::cout << "Top: " << mstack.top() << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl;
		for (MutantStack<int>::reverse_iterator i = mstack.rbegin(); i < mstack.rend(); i++)
		{
			std::cout << *i << " ";
		}
		std::cout << std::endl;
		for (MutantStack<int>::reverse_iterator i = mstack.rbegin(); i < mstack.rend(); i++)
		{
			*i = 9;
		}
		for (MutantStack<int>::reverse_iterator i = mstack.rbegin(); i < mstack.rend(); i++)
		{
			std::cout << *i << " ";
		}
		std::cout << std::endl;
	}
}

/*
int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "----------" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
*/
