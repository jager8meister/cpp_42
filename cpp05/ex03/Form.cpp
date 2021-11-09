#include "Form.hpp"

Form::Form() : _name("NoName"), _sign(false), _grade_exec(150), _grade_sign(150)
{
	this->exceptions_thrower();
}

Form::Form(const Form &form) : _name(form.get_name()), _sign(form.get_sign()), _grade_exec(form.get_grade_exec()), _grade_sign(form.get_grade_sign())
{
	this->exceptions_thrower();
}

Form	&Form::operator=(const Form &form)
{
	this->_sign = form._sign;
	this->exceptions_thrower();
	return *this;
}

Form::Form(const std::string name, const int grade_exec, const int grade_sign) : _name(name), _grade_exec(grade_exec), _grade_sign(grade_sign)
{
	this->_sign = false;
	this->exceptions_thrower();
}

std::string	Form::get_name() const
{
	return this->_name;
}

int			Form::get_grade_exec() const
{
	return this->_grade_exec;
}

int			Form::get_grade_sign() const
{
	return  this->_grade_sign;
}

bool		Form::get_sign() const
{
	return this->_sign;
}

void		Form::set_sign(bool sign)
{
	this->_sign = sign;
	this->exceptions_thrower();
}

void		Form::exceptions_thrower()
{
	if (this->_grade_exec < 1 || this->_grade_sign < 1)
	{
		throw GradeTooHighException();
	}
	else if (this->_grade_exec > 150 || this->_grade_sign > 150)
	{
		throw GradeTooLowException();
	}
}

void		Form::beSigned(const Bureaucrat &bur)
{
	if (bur.get_grade() <= this->_grade_sign)
	{
		this->_sign = true;
	}
	else
	{
		throw GradeTooLowException();
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

const char* Form::NotSignedYet::what() const throw()
{
	return "Not signed yet";
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form " << form.get_name() << " sign status " << form.get_sign() << " exec grade is " << form.get_grade_exec() << " sign grade is " << form.get_grade_sign();
	return os;
}

Form::~Form()
{}