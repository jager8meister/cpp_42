#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
		void		set_target(std::string target);
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &form);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &form);
		void					execute(Bureaucrat const & executor) const;
		std::string				get_target();
		~PresidentialPardonForm();
};


#endif