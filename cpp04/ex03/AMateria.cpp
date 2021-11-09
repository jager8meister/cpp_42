#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
	
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

std::string const	&AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* using AMateria *" << std::endl;
	(void)target;
}

AMateria& AMateria::operator=(AMateria const& mat)
{
	this->_type = mat._type;
	return *this;
}
