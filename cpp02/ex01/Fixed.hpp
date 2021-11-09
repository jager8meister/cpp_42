#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixedValue;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &fix);
		Fixed(const int fix);
		Fixed(const float fix);
		Fixed	&operator= (const Fixed &fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		~Fixed();
};

std::ostream &operator<< (std::ostream &out, const Fixed &c);

#endif