#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <unistd.h>
#include <cstdlib>
#include <climits>
#include <algorithm>
# include <iostream>


class Span
{
	private:
		std::vector<int>	_arr;
		const unsigned int	_n;
		unsigned int		_current_num_of_elems;
		class InvalidAction: public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class InvalidAdd: public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class InvalidSpan: public std::exception
		{
			public:
				const char	*what() const throw();
		};
		Span();
		Span	&operator=(const Span &elem);
	public:
		Span(const Span &elem);
		Span(unsigned int N);
		void			addNumber(int number);
		void			addRangeOfNumbers(int start, int finish);
		void			addRangeOfNumbers(int start, unsigned int times, int step);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		~Span();
};

#endif