#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T	&min(const T &a, const T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
const T& max(const T &a, const T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

class whatever
{
	private:
		int	_val;
	public:
		whatever();
		whatever(const whatever &what);
		whatever&	operator=(const whatever &what);
		bool		operator>(const whatever &what) const;
		bool		operator>=(const whatever &what) const;
		bool		operator<(const whatever &what) const;
		bool		operator<=(const whatever &what) const;
		bool		operator==(const whatever &what) const;
		bool		operator!=(const whatever &what) const;
		int			getVal() const;
		void		setVal(int val);
		~whatever();
};

std::ostream &operator<<(std::ostream &os, const whatever &what);

#endif