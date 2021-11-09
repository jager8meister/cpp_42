#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "";
	std::cout << "wrong animal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &beast)
{
	this->type = beast.type;
	std::cout << "wrong animal copy constructor" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &beast)
{
	this->type = beast.type;
	std::cout << "wrong animal assignation operator" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrong animal destructor" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return this->type;
}

void			WrongAnimal::makeSound() const
{
	std::cout << "wrong silence" << std::endl;
}
