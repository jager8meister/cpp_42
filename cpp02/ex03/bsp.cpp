#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	bool	res = false;
	int		sign_one = (a.get_x() - point.get_x()) * (b.get_y() - a.get_y()) - (b.get_x() - a.get_x()) * (a.get_y() - point.get_y());
	int		sign_two = (b.get_x() - point.get_x()) * (c.get_y() - b.get_y()) - (c.get_x() - b.get_x()) * (b.get_y() - point.get_y());
	int		sign_three = (c.get_x() - point.get_x()) * (a.get_y() - c.get_y()) - (a.get_x() - c.get_x()) * (c.get_y() - point.get_y());

	if (sign_one < 0 && sign_two < 0 && sign_three < 0)
	{
		res = true;
	}
	else if (sign_one > 0 && sign_two > 0 && sign_three > 0)
	{
		res = true;
	}
	return res;
}
