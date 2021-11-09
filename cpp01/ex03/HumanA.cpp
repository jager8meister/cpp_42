#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon *weapon)
{
	this->name = name;
	if (weapon == NULL)
	{
		this->weapon  = new Weapon();
	}
	else
		this->weapon = weapon;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::HumanA()
{
	this->name = "";
	this->weapon = new Weapon();;
}

HumanA::~HumanA()
{
}

void	HumanA::printWeaponType()
{
	std::cout << this->weapon->getType() << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
