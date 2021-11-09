#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default cat constructor" << std::endl;
}

Cat::Cat(const Cat &beast)
{
	this->type = "Cat";
	(void)beast;
	this->_brain = new Brain(*beast._brain);
	std::cout << "Copy cat constructor" << std::endl;
}

Cat	&Cat::operator=(const Cat &beast)
{
	this->type = "Cat";
	(void)beast;
	delete this->_brain;
	this->_brain = new Brain(*beast._brain);
	std::cout << "Cat assignation operator" << std::endl;
	return *this;
}

void		Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor" << std::endl;
}

Brain	*Cat::getBrain()
{
	return this->_brain;
}

void	Cat::setBrain(Brain	*brain)
{
	delete this->_brain;
	this->_brain = new Brain(*brain);
}

void	Cat::setNewIdea(std::string str)
{
	if (this->_brain->setNewIdea(str) == 1)
	{
		return ;
	}
	else
		std::cout << "Brain is full" << std::endl;
}

std::string	Cat::getLastIdea()
{
	return this->_brain->getLastIdea();
}
