#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _idea[100];
		int			_index;
	public:
		Brain();
		Brain(const Brain &brain);
		Brain	&operator=(const Brain &brain);
		~Brain();
		std::string	getExactIdea(int index);
		std::string	getLastIdea();
		std::string	*getIdeas();
		int		setNewIdea(std::string str);
};



#endif