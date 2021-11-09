#ifndef FRAGTRAP_HPP
# define  FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &clap);
		FragTrap	&operator=(const FragTrap &clap);
		void		highFivesGuys(void);
		~FragTrap();
};

#endif