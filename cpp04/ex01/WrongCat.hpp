#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &beast);
		WrongCat	&operator=(const WrongCat &beast);
		~WrongCat();
		void	makeSound(void) const;
};


#endif