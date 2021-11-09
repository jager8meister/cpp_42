#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <algorithm>
# include <iostream>
# include <unistd.h>
# include <deque>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		MutantStack() : std::stack<T, std::deque<T> >()
		{}
		MutantStack(MutantStack<T> &mut) : std::stack<T, std::deque<T> >(mut)
		{}
		MutantStack<T>	&operator=(MutantStack<T> &mut)
		{
			this->c = mut.c;
			return *this;
		}
		~MutantStack()
		{}
		typedef typename std::deque<T>::iterator iterator;
		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator	rbegin()
		{
			return this->c.rbegin();
		}
		reverse_iterator	rend()
		{
			return this->c.rend();
		}
};

#endif