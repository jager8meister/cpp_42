#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap a;
	a.attack("opp");
	std::cout << std::endl;
	a.takeDamage(18);
	std::cout << std::endl;
	a.beRepaired(13);
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
	a.guardGate();
	std::cout << std::endl;
	a.highFivesGuys();
	std::cout << std::endl;
	return 0;
}
