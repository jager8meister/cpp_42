#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "Diamond";
	ClapTrap::_name = "Diamond_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &clap)
{
	this->_name = clap._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_attackDamage = clap._attackDamage;
	this->_energyPoints = clap._energyPoints;
	this->_hitpoints = clap._hitpoints;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &clap)
{
	this->_name = clap._name;
	// ClapTrap::_name = this->_name + "_clap_name";
	this->_attackDamage = clap._attackDamage;
	this->_energyPoints = clap._energyPoints;
	this->_hitpoints = clap._hitpoints;
	return *this;
}

void		DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name: " << this->_name << " and mine ClapTrap name: " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " got destroyed" << std::endl;
}
