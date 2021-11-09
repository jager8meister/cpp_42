#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::~Point()
{
}

Point::Point(float _x, float _y) : x(_x), y(_y)
{
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
}

Point	&Point::operator=(const Point &other)
{
	Point res(other);
	return *this;
}

float Point::get_x() const
{
	return (this->x.toFloat());
}

float Point::get_y() const
{
	return (this->y.toFloat());
}
