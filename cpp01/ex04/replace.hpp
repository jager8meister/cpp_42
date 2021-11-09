#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>

class replace
{
	public:
		replace(std::string s1, std::string s2, const char * filename);
		~replace();
};


#endif