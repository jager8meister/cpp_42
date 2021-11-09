#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice & icy);
		Ice	&operator=(const Ice &icy);
		AMateria*	clone() const;
		void		use(ICharacter& target);
		~Ice();
};

#endif