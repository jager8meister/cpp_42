#include "Fixed.hpp"

int main( void ) {
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// // Fixed const b( Fixed( 5.0f ) / Fixed( 2 ) );
	// // Fixed a(1);
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a.toInt() << std::endl;

	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	// Fixed const c( Fixed( 5.0f ) / Fixed( 2 ) );
	// std::cout << c << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
