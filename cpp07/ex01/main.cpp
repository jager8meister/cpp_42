#include "iter.hpp"

const char	*TooBigLength::what(void) const throw()
{
	return "Too big length";
}

const char* NegativeLength::what(void) const throw()
{
	return "Negative Length";
}

int	main()
{
	try
	{
		int	arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		int	length = 10;
		checkMaxLen(arr, length);
		iter(arr, length, squares);
		std::cout << std::endl;
		iter(arr, length, printin);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		double	arr_2[10] = {0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5, 8.5, 9.5};
		int		length = 10;
		checkMaxLen(arr_2, length);
		iter(arr_2, length, squares);
		std::cout << std::endl;
		iter(arr_2, length, printin);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


/*
class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}
*/
