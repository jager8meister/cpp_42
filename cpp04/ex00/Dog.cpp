#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog's default constructor" << std::endl;
}

Dog::Dog(const Dog &beast)
{
	this->type = "Dog";
	(void)beast;
	std::cout << "Dog's copy constructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &beast)
{
	this->type = "Dog";
	(void)beast;
	std::cout << "Dog's assignation operator" << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}
