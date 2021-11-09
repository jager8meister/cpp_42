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
		bool	operator> (const Fixed &fix) const;
		bool	operator< (const Fixed &fix) const;
		bool	operator>= (const Fixed &fix) const;
		bool	operator<= (const Fixed &fix) const;
		bool	operator== (const Fixed &fix) const;
		bool	operator!= (const Fixed &fix) const;
		Fixed	operator+ (const Fixed &fix);
		Fixed	operator- (const Fixed &fix);
		Fixed	operator* (const Fixed &fix);
		Fixed	operator/ (const Fixed &fix);
		Fixed	operator++ (int);
		Fixed	&operator++ (void);
		Fixed	operator-- (int);
		Fixed	&operator-- (void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed	&min(Fixed &fixOne, Fixed &fixTwo);
		static Fixed	&max(Fixed &fixOne, Fixed &fixTwo);
		static const Fixed	&min(const Fixed &fixOne, const Fixed &fixTwo);
		static const Fixed	&max(const Fixed &fixOne, const Fixed &fixTwo);

		~Fixed();
};

std::ostream &operator<< (std::ostream &out, const Fixed &c);

#endif