#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a;
	FragTrap b(a);
	FragTrap c("Fraggy Name");
	a.attack("opp");
	c.takeDamage(18);
	c.beRepaired(13);
	c.highFivesGuys();
	return 0;
}
