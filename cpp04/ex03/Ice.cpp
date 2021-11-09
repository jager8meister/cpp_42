#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice & icy)
{
	*this = icy;
}

Ice	&Ice::operator=(const Ice &icy)
{
	// *this = icy;
	// return *this;
	AMateria::operator=(icy);
	return *this;
}

AMateria*	Ice::clone() const
{
	AMateria	*result = new Ice();
	return result;
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}

Ice::~Ice()
{

}
