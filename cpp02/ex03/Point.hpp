#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		~Point();
		Point(const Point &other);
		Point(float x, float y);
		float get_x() const;
		float get_y() const;
		Point	&operator=(const Point &other);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif