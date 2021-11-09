#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &beast);
		Cat	&operator=(const Cat &beast);
		void		makeSound() const;
		~Cat();
};

#endif