#include "Array.hpp"


template <typename T>
Array<T>::Array()
{
	this->_length = 0;
	this->_arr = new T[this->_length];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_length = n;
	this->_arr = new T[this->_length];
}

template <typename T>
Array<T>::Array(const Array &arr)
{
	this->_length = arr._length;
	this->_arr = new T[this->_length];
	for (size_t i = 0; i < this->_length; i++)
	{
		this->_arr[i] = arr._arr[i];
	}
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &arr)
{
	this->_length = arr._length;
	delete [] this->_arr;
	this->_arr = new T[this->_length];
	for (size_t i = 0; i < this->_length; i++)
	{
		this->_arr[i] = arr._arr[i];
	}
	return *this;
}

template <typename T>
T		&Array<T>::operator[](unsigned int index)
{
	if (index < this->_length)
	{
		return this->_arr[index];
	}
	else
	{
		throw InvalidAction();
	}
}

template <typename T>
const T			&Array<T>::operator[](unsigned int index) const
{
	if (index < this->_length)
	{
		return this->_arr[index];
	}
	else
	{
		throw InvalidAction();
	}
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return this->_length;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_arr;
}

template <typename T>
const char* Array<T>::InvalidAction::what() const throw()
{
	return "Invalid action";
}

#define MAX_VAL 750
int main(int, char**)
{
	{
		unsigned int	size = 10;
		Array<int>		test(size);
		for (unsigned int i = 0; i < size; i++)
		{
			test[i] = 99;
		}
		const Array<int>		arr(test);
		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}
	Array<int>	numbers(MAX_VAL);
	int*		mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int	value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int>	tmp = numbers;
		Array<int>	test(tmp);
	}
	
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	std::cout << numbers[i] << std::endl;
	// }
	delete [] mirror;//
	return 0;
}