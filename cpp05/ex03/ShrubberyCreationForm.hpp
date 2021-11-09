#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
		void		set_target(std::string target);
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &form);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &form);
		void					execute(Bureaucrat const & executor) const;
		std::string				get_target();
		~ShrubberyCreationForm();
};


#endif