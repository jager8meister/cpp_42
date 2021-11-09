#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

class TooBigLength: public std::exception
{
	public:
		const char*	what(void) const throw();
};

class NegativeLength: public std::exception
{
	public:
		const char*	what(void) const throw();
};


template <typename T>
void checkMaxLen(T &array, int length)
{
	if (length < 0)
	{
		throw NegativeLength();
	}
	if ((sizeof(array) / sizeof(*array)) < static_cast<size_t>(length))
	{
		throw TooBigLength();
	}
}

template <typename T>
void iter (T *array, size_t length, void (*f)(const T &))
{
	if (array == NULL || f == NULL)
	{
		return;
	}
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
}

template <typename T>
void	squares(T const &elem)
{
	std::cout << elem * elem << " ";
}

template <typename T>
void	printin(T const &elem)
{
	std::cout << elem << " ";
}

#endif