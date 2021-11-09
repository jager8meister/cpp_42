#include "Karen.hpp"

Karen::Karen()
{
	this->level = 0;
}

Karen::~Karen()
{
}

void	Karen::debug(void)
{
	std::cout << "[DEBUG LEVEL]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[INFO LEVEL]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[WARNING LEVEL]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ERROR LEVEL]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::increaseLevel(void)
{
	this->level++;
}

int		Karen::getLevel(void)
{
	return this->level;
}

void Karen::complain(std::string level)
{
	std::string levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	while (this->getLevel() < 5 && levels[this->getLevel()] != level)
	{
		this->increaseLevel();
	}
	typedef void (Karen::*method) (void);
	method methods[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	switch (this->getLevel())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			(this->*methods[this->getLevel()])();
			break;
		default:
			std::cout << "invalid level" << std::endl;
			break;
	}
}
