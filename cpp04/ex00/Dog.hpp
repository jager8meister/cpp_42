#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &beast);
		Dog	&operator=(const Dog &beast);
		void		makeSound() const;
		~Dog();
};


#endif