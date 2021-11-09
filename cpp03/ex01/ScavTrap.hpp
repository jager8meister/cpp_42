#ifndef SCAVTRAP_HPP
# define  SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &clap);
		ScavTrap	&operator=(const ScavTrap &clap);
		void 		guardGate();
		void 		attack(std::string const & target);
		~ScavTrap();
};	

#endif