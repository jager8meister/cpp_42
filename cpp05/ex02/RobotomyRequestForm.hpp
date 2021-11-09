#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
		void		set_target(std::string target);
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &form);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &form);
		void				execute(Bureaucrat const& executor) const;
		std::string			get_target();
		~RobotomyRequestForm();
};


#endif