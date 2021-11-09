#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "none";
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Default ClapTrap constructor done" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap constructor with name: " << name << " done" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	this->_name = clap._name;
	this->_attackDamage = clap._attackDamage;
	this->_energyPoints = clap._energyPoints;
	this->_hitpoints = clap._hitpoints;
	std::cout << "ClapTrap copy constructor of ClapTrap: " << clap._name << " done" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap)
{
	this->_name = clap._name;
	this->_hitpoints = clap._hitpoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	std::cout << "ClapTrap assignation" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " got destroyed" << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << this->_name << " got hit with " << amount << " attack." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " got " << amount << "xp repaired" << std::endl;
}