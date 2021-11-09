#include "PresidentialPardonForm.hpp"


void	PresidentialPardonForm::set_target(std::string target)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("president", 5, 25)
{
	this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : Form(form)
{
	this->_target = form._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &form)
{
	this->Form::operator=(form);
	this->_target = form._target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("president", 5, 25)
{
	this->_target = target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->get_grade_exec() < executor.get_grade())
	{
		throw GradeTooLowException();
	}
	if (this->get_sign() == false)
	{
		throw NotSignedYet();
	}
	std::cout << "Tells us " << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

std::string	PresidentialPardonForm::get_target()
{
	return this->_target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
