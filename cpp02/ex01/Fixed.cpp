#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedValue = 0;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
    return this->fixedValue;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixedValue = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator= (const Fixed &fix)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedValue = fix.getRawBits();
	return (*this);
}

Fixed::Fixed(const int fix)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedValue = fix << this->bits;
}

Fixed::Fixed(const float fix)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedValue =  (int)(roundf(fix * (1 << this->bits)));
}

float	Fixed::toFloat( void ) const
{
	return (float)((float)this->fixedValue / (float)(1 << this->bits));
}

int		Fixed::toInt( void ) const
{
	return (int)(this->fixedValue >> this->bits);
}

std::ostream &operator<< (std::ostream &out, const Fixed &c)
{
	out << c.toFloat();
	return out;
}

