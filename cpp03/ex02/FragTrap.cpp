#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "Fraggy";
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default FragTrap constructor done" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor with name: " << name << " done" << std::endl;
}

FragTrap::FragTrap(const FragTrap &clap)
{
	this->_name = clap._name;
	this->_hitpoints = clap._hitpoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	std::cout << "FragTrap copy constructor of FragTrap: " << clap._name << " done" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &clap)
{
	this->_name = clap._name;
	this->_hitpoints = clap._hitpoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	std::cout << "FragTrap assignation" << std::endl;
	return *this;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "Highfives from FragTrap " << this->_name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " got destroyed" << std::endl;
}
