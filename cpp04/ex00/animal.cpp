#include "animal.hpp"

Animal::Animal()
{
	type = "";
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &beast)
{
	this->type = beast.type;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal	&Animal::operator=(const Animal &beast)
{
	this->type = beast.type;
	std::cout << "Animal assignation operator" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

std::string		Animal::getType() const
{
	return  this->type;
}

void	Animal::makeSound() const
{
	std::cout << "silence" << std::endl;
}
