#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_grade_exec;
		const int			_grade_sign;
		void				set_sign(bool sign);
		void		exceptions_thrower();
		class GradeTooHighException: public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char*	what() const throw();
		};
	public:
		Form();
		Form(const Form &form);
		Form(const std::string name, const int grade_exec, const int grade_sign);
		Form		&operator=(const Form &form);
		std::string	get_name() const;
		int			get_grade_exec() const;
		int			get_grade_sign() const;
		bool		get_sign() const;
		void		beSigned(const Bureaucrat &bur);
		~Form();
};

std::ostream	&operator<<(std::ostream &os, const Form &form);


#endif