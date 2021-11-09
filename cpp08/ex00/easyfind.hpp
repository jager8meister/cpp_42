#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <typeinfo>
# include <deque>
# include <iterator>

template <typename T>
typename T::const_iterator easyfind(T const& container, int value)
{
	return std::find(container.begin(), container.end(), value);
}

#endif