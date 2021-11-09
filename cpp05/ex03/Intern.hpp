#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		class WrongFormName: public std::exception
		{
			public:
				const char*	what() const throw();
		};
		Form	*shrubbery_func(std::string const target);
		Form	*robotomy_func(std::string const target);
		Form	*presidental_func(std::string const target);
	public:
		Intern();
		Intern(const Intern &intern);
		Intern	&operator=(const Intern &intern);
		Form	*makeForm(std::string const formName, std::string const target);
		~Intern();
};



#endif