#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &cur)
{
	*this = cur;
}

Cure	&Cure::operator=(const Cure &cur)
{
	// *this = cur;
	AMateria::operator=(cur);
	return *this;
}

AMateria	*Cure::clone() const
{
	AMateria	*result = new Cure();
	return result;
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{

}
