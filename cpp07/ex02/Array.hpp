#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_length;
		T				*_arr;
		class InvalidAction: public std::exception
		{
			public:
				const char* what(void) const throw();
		};
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &arr);
		Array			&operator=(const Array &arr);
		T				&operator[](unsigned int index);
		const T			&operator[](unsigned int index) const;
		unsigned int	size() const;
		~Array();
};




#endif