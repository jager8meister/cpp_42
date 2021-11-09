#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "animal.hpp"
#include "Brain.hpp"

class Dog : protected Animal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &beast);
		Dog	&operator=(const Dog &beast);
		void	makeSound() const;
		Brain	*getBrain();
		void	setBrain(Brain	*brain);
		void	setNewIdea(std::string str);
		std::string	getLastIdea();
		void	printType();
		~Dog();
};


#endif