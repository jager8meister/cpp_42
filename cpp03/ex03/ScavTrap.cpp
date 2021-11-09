#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "Scav";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor with name: " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &clap)
{
	this->_attackDamage = clap._attackDamage;
	this->_energyPoints = clap._energyPoints;
	this->_hitpoints = clap._hitpoints;
	this->_name = clap._name;
	std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &clap)
{
	this->_name = clap._name;
	this->_hitpoints = clap._hitpoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	std::cout << "ScavTrap assignation" << std::endl;
	return *this;
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

void		ScavTrap::attack(std::string const & target)
{
	std::cout << "Scavtrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << this->_name << " got destroyed" << std::endl;
}
