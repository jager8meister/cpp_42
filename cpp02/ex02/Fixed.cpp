#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedValue = 0;
}

Fixed::Fixed(const Fixed &fix)
{
	*this = fix;
}

int	Fixed::getRawBits(void) const
{
    return this->fixedValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedValue = raw;
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator= (const Fixed &fix)
{
	this->fixedValue = fix.getRawBits();
	return (*this);
}

Fixed::Fixed(const int fix)
{
	this->fixedValue = fix << this->bits;
}

Fixed::Fixed(const float fix)
{
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

bool	Fixed::operator>(const Fixed &fix) const
{
	bool res = (this->fixedValue > fix.fixedValue);
	return res;
}

bool	Fixed::operator<(const Fixed &fix) const
{
	bool res = (this->fixedValue < fix.fixedValue);
	return res;
}

bool	Fixed::operator>=(const Fixed &fix) const
{
	bool res = (this->fixedValue >= fix.fixedValue);
	return res;
}

bool	Fixed::operator<=(const Fixed &fix) const
{
	bool res = (this->fixedValue <= fix.fixedValue);
	return res;
}

bool	Fixed::operator==(const Fixed &fix) const
{
	bool res = (this->fixedValue == fix.fixedValue);
	return res;
}

bool	Fixed::operator!=(const Fixed &fix) const
{
	bool res = (this->fixedValue != fix.fixedValue);
	return res;
}

Fixed	Fixed::operator+ (const Fixed &fix)
{
	Fixed res;
	res.setRawBits(this->fixedValue + fix.fixedValue);
	return res;
}

Fixed	Fixed::operator- (const Fixed &fix)
{
	Fixed res;
	res.setRawBits(this->fixedValue - fix.fixedValue);
	return res;
}

Fixed	Fixed::operator* (const Fixed &fix)
{
	float one = this->toFloat();
	float two = fix.toFloat();
	float result_val = one * two;
	Fixed res(result_val);
	return res;
}

Fixed	Fixed::operator/ (const Fixed &fix)
{
	if (fix.fixedValue == 0)
	{
		std::cout << "division by zero" << std::endl;
		return *this;
	}
	float one = this->toFloat();
	float two = fix.toFloat();
	float result_val = one / two;
	Fixed res(result_val);
	return res;
}

Fixed	&Fixed::min(Fixed &fixOne, Fixed &fixTwo)
{
	if (fixOne > fixTwo)
		return fixTwo;
	else
		return fixOne;
}

Fixed	&Fixed::max(Fixed &fixOne, Fixed &fixTwo)
{
	if (fixOne > fixTwo)
		return fixOne;
	else
		return fixTwo;
}

const Fixed	&Fixed::max(const Fixed &fixOne, const Fixed &fixTwo)
{
	if (fixOne > fixTwo)
		return fixOne;
	else
		return fixTwo;
}

Fixed	Fixed::operator++ (int)
{
	Fixed res(*this);
	res.setRawBits(this->fixedValue++);
	return res;
}

Fixed	&Fixed::operator++ (void)
{
	this->fixedValue++;
	return *this;
}

Fixed	Fixed::operator-- (int)
{
	Fixed res;
	res.setRawBits(this->fixedValue - 1);
	return res;
}

Fixed	&Fixed::operator-- (void)
{
	this->fixedValue--;
	return *this;
}

