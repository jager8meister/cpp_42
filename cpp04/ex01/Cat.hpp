#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &beast);
		Cat	&operator=(const Cat &beast);
		void	makeSound() const;
		Brain	*getBrain();
		void	setBrain(Brain	*brain);
		void	setNewIdea(std::string str);
		std::string	getLastIdea();
		~Cat();
};

#endif