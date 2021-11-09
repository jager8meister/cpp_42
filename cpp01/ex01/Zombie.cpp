#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << name << " IS DEAD" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	newZombie(std::string name)
{
	Zombie *zombya = new Zombie(name);
	return zombya;
}

void	randomChump(std::string name)
{
	Zombie zomb = Zombie(name);
	zomb.announce();
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
