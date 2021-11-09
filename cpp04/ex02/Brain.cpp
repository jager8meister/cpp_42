#include "Brain.hpp"

Brain::Brain()
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_idea[i] = "";
	}
	this->_index = 0;
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_idea[i] = brain._idea[i];
	}
	this->_index = brain._index;
	std::cout << "Brain copy constructor" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_idea[i] = brain._idea[i];
	}
	this->_index = brain._index;
	std::cout << "Brain assignation operator" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

std::string	Brain::getExactIdea(int index)
{
	if (index < this->_index)
		return this->_idea[index];
	else
		return "";
	// return this->_idea[index];
}

std::string	Brain::getLastIdea()
{
	if (this->_index > 0)
		return this->_idea[this->_index - 1];
	else
		return "";
}

std::string	*Brain::getIdeas()
{
	return this->_idea;
}

int			Brain::setNewIdea(std::string str)
{
	if (this->_index < 100)
	{
		this->_idea[this->_index] = str;
		this->_index++;
		return 1;
	}
	else
		return 0;
}
