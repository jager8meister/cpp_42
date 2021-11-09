#include "RobotomyRequestForm.hpp"


void    RobotomyRequestForm::set_target(std::string target)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy", 45, 72)
{
	this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy", 45, 72)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : Form(form)
{
	this->_target = form._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form)
{
	this->Form::operator=(form);
	this->_target = form._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (this->get_grade_exec() < executor.get_grade())
	{
		throw GradeTooLowException();
	}
	if (this->get_sign() == false)
	{
		throw NotSignedYet();
	}
	std::cout << "XXXXX  DRILLING NOISE  XXXXX" << std::endl;
	std::srand((unsigned int)time(NULL));
	int  action = rand() % 2;
	if (action == 1)
	{
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << this->_target << " hasn't been robotomized. FAILURE" << std::endl;
	}
}

std::string	RobotomyRequestForm::get_target()
{
	return this->_target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
