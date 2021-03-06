#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &beast);
		Animal	&operator=(const Animal &beast);
		virtual ~Animal();
		std::string		getType() const;
		virtual void	makeSound() const;
};



#endif