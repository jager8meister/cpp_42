#include "span.hpp"

Span::Span(const Span &elem) : _n(elem._n)
{
	if (this->_n <= 0)
	{
		throw InvalidAction();
	}
	this->_current_num_of_elems = elem._current_num_of_elems;
	this->_arr = elem._arr;
}

Span	&Span::operator=(const Span &elem)
{
	(void)elem;
	throw InvalidAction();
}

Span::Span(unsigned int N) : _n(N)
{
	if (this->_n <= 0)
	{
		throw InvalidAction();
	}
	this->_current_num_of_elems = 0;
}

void	Span::addNumber(int number)
{
	if (this->_current_num_of_elems < this->_n)
	{
		this->_arr.push_back(number);
		this->_current_num_of_elems++;
	}
	else
	{
		throw InvalidAdd();
	}
}

void	Span::addRangeOfNumbers(int start, int finish)
{
	unsigned int	diff = this->_n - this->_current_num_of_elems;
	if (start > finish)
	{
		throw InvalidAdd();
	}
	if (static_cast<unsigned int>(std::abs(finish - start)) > diff)
	{
		throw InvalidAdd();
	}
	for (size_t i = 0; i <= static_cast<size_t>(std::abs(finish - start)); i++)
	{
		this->addNumber(start + i);
	}	
}

void	Span::addRangeOfNumbers(int start, unsigned int times, int step)
{
	unsigned int	diff = this->_n - this->_current_num_of_elems;
	if (diff < times)
	{
		throw InvalidAdd();
	}
	for (size_t i = 0; i < static_cast<size_t>(times); i++)
	{
		this->addNumber(start + (i * step));
	}
}

unsigned int		Span::shortestSpan()
{
	if (this->_current_num_of_elems <= 1)
	{
		throw InvalidSpan();
	}
	std::sort(this->_arr.begin(), this->_arr.end());
	unsigned int span = UINT_MAX;
	for (size_t i = 0; i < this->_current_num_of_elems - 1; i++)
	{
		if (static_cast<unsigned int>(std::abs(this->_arr[i + 1] - this->_arr[i])) < span)
			span = this->_arr[i + 1] - this->_arr[i];
	}
	return span;
}

unsigned int		Span::longestSpan()
{
	if (this->_current_num_of_elems <= 1)
	{
		throw InvalidSpan();
	}
	std::sort(this->_arr.begin(), this->_arr.end());
	unsigned int span = static_cast<unsigned int>(std::abs(this->_arr[0] - this->_arr[this->_current_num_of_elems - 1]));
	return span;
}

Span::Span() : _n(0)
{
	throw InvalidAction();
}

Span::~Span()
{

}

const char	*Span::InvalidAction::what() const throw()
{
	return "Invalid action";
}

const char	*Span::InvalidAdd::what() const throw()
{
	return "Array is full";
}

const char	*Span::InvalidSpan::what() const throw()
{
	return "Invalid span";
}