#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a;
	ScavTrap b(a);
	ScavTrap c("Scavvy");
	a.attack("opp");
	c.takeDamage(18);
	c.beRepaired(13);
	c.guardGate();
	return 0;
}
