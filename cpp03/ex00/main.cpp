#include "ClapTrap.hpp"


int	main()
{
	ClapTrap a;
	ClapTrap b(a);
	ClapTrap c("Clappy");
	a.attack("opp");
	c.takeDamage(18);
	c.beRepaired(13);
	return 0;
}
