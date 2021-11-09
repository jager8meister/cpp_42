#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog's default constructor" << std::endl;
}

Dog::Dog(const Dog &beast)
{
	this->type = "Dog";
	this->_brain = new Brain(*beast._brain);
	(void)beast;
	std::cout << "Dog's copy constructor" << std::endl;
}

Dog	&Dog::operator=(const Dog &beast)
{
	// std::cout << "HERE" << std::endl;
	this->type = "Dog";
	// this->_brain->~Brain(); //possible seg
	delete this->_brain;
	this->_brain = new Brain(*beast._brain);
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
	// std::cout << "here" << std::endl;
	delete this->_brain;
	std::cout << "Dog destructor" << std::endl;
}

Brain	*Dog::getBrain()
{
	return this->_brain;
}

void	Dog::setBrain(Brain	*brain)
{
	delete this->_brain;
	this->_brain = brain;
}

void	Dog::setNewIdea(std::string str)
{
	if (this->_brain->setNewIdea(str) == 1)
	{
		return ;
	}
	else
		std::cout << "Brain is full" << std::endl;
}

std::string	Dog::getLastIdea()
{
	return this->_brain->getLastIdea();
}
