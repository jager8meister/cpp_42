#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("NoName")
{
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 0 && grade <= 150)
	{
		this->_grade = grade;
	}
	else
	{
		this->_grade = 150;
		if (grade <= 0)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
		{
			throw Bureaucrat::GradeTooLowException();
		}
	}
	
	//добавить exception
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur) : _name(bur._name), _grade(bur._grade)
{
	if (this->_grade <= 0)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bur)
{
	this->_grade = bur._grade;
	if (this->_grade <= 0)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	return *this;
}

std::string	Bureaucrat::get_name() const
{
	return this->_name;
}

int			Bureaucrat::get_grade() const
{
	return this->_grade;
}

void		Bureaucrat::incr_grade()
{
	if (this->_grade > 1)
	{
		this->_grade--;
	}
	else
	{
		throw Bureaucrat::GradeTooHighException();
	}
}

void		Bureaucrat::decr_grade()
{
	if (this->_grade < 150)
	{
		this->_grade++;
	}
	else
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat()
{

}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bur)
{
	os << bur.get_name() + ", bureaucrat grade " << bur.get_grade();
	return os;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "1 is highest grade\n";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "150 is lowest grade\n";
}


void	Bureaucrat::set_grade(int grade)
{
	this->_grade = grade;
}
