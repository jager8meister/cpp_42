#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		void				set_grade(int grade);
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
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &bur);
		Bureaucrat		&operator=(const Bureaucrat &bur);
		std::string		get_name() const;
		int				get_grade() const;
		void			incr_grade();
		void			decr_grade();
		~Bureaucrat();
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bur);

#endif