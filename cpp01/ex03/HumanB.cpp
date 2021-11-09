#include "HumanB.hpp"

HumanB::HumanB()
{
	this->name = "";
	this->weapon = NULL;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon *weapon)
{
	this->name = name;
	if (weapon == NULL)
		this->weapon = new Weapon();
	else
		this->weapon = weapon;
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	if (this->weapon != NULL)
	{
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon *weapon)
{
	if (weapon == NULL)
	{
		this->weapon = new Weapon();
	}
	else
		this->weapon = weapon;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
