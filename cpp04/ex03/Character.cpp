#include "Character.hpp"

Character::Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	this->name = "NoName";
}

Character::Character(std::string name)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	this->name = name;
}

Character::Character(const Character &chel)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->inventory[i] = chel.inventory[i]->clone();
	}
	this->name = chel.name;
}

Character& Character::operator=(const Character &chel)
{
	if (this != &chel)
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
		}
		for (size_t i = 0; i < 4; i++)
		{
			if (chel.inventory[i] != NULL)
			{
				this->inventory[i] = chel.inventory[i]->clone();
			}
		}
		this->name = chel.name;
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			delete this->inventory[i];
			this->inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		this->inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx] != NULL)
	{
		this->inventory[idx]->use(target);
	}
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		delete this->inventory[i];
	}
}
