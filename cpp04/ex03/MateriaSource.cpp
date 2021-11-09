#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		this->arr[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &mat)
{
	for (size_t i = 0; i < 4; i++)
	{
		this->arr[i] = mat.arr[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &mat)
{
	if (this != &mat)
	{
		for (size_t i = 0; i < 4; i++)
		{
			delete this->arr[i];
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		this->arr[i] = mat.arr[i];
	}
	return *this;
}

void			MateriaSource::learnMateria(AMateria* mat)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->arr[i] == NULL)
		{
			this->arr[i] = mat;
			break;
		}
	}
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice" || type == "cure")
	{
		for (size_t i = 0; i < 4; i++)
		{
			if ((this->arr[i] != NULL) && (this->arr[i]->getType() == type))
				return this->arr[i]->clone();
		}
	}
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		delete this->arr[i];
	}
}
