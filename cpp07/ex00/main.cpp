#include "whatever.hpp"

whatever::whatever()
{
	this->_val = 5;
}

whatever::whatever(const whatever &what)
{
	this->_val = what._val;
}

whatever&	whatever::operator=(const whatever &what)
{
	this->_val = what._val;
	return *this;
}

bool	whatever::operator>(const whatever &what) const
{
	return (this->_val > what._val);
}

bool	whatever::operator>=(const whatever &what) const
{
	return (this->_val >= what._val);
}

bool	whatever::operator<(const whatever &what) const
{
	return (this->_val < what._val);
}

bool	whatever::operator<=(const whatever &what) const
{
	return (this->_val <= what._val);
}

bool	whatever::operator==(const whatever &what) const
{
	return (this->_val == what._val);
}

bool	whatever::operator!=(const whatever &what) const
{
	return (this->_val != what._val);
}

int		whatever::getVal() const
{
	return this->_val;
}

void	whatever::setVal(int val)
{
	this->_val = val;
}

whatever::~whatever()
{}

std::ostream	&operator<<(std::ostream &os, const whatever &what)
{
	os << what.getVal();
	return os;
}

int	main(void)
{
	int	a = 2;
	int	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	/*-------------------*/
	std::cout << "---------------------------" << std::endl;
	whatever w;
	whatever v;
	w.setVal(54);
	v.setVal(11);
	::swap( w, v );
	std::cout << "w = " << w << ", v = " << v << std::endl;
	std::cout << "min( w, v ) = " << ::min( w, v ) << std::endl;
	std::cout << "max( w, v ) = " << ::max( w, v ) << std::endl;

	return 0;
}

/*
class Awesome
{
	public:
	Awesome(void) : _n(0) {}
	Awesome( int n ) : _n( n ) {}
	Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }
	private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int	main(void)
{
	Awesome a(2), b(4);
	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(a, b) << std::endl;
	return (0);
}
*/