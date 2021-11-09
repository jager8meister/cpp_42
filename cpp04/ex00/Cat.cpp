#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default cat constructor" << std::endl;
}

Cat::Cat(const Cat &beast)
{
	this->type = "Cat";
	(void)beast;
	std::cout << "Copy cat constructor" << std::endl;
}

Cat	&Cat::operator=(const Cat &beast)
{
	this->type = "Cat";
	(void)beast;
	std::cout << "Cat assignation operator" << std::endl;
	return *this;
}

void		Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}
