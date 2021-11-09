#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat	cc("Vep", 10);
		Intern bb;
		Form	*ff = bb.makeForm("wrong", "target");
		cc.signForm(*ff);
		cc.executeForm(*ff);
		// std::cout << ff->get_name() << std::endl;
		// std::cout << ff->get_target() << std::endl;
		delete ff;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------" << std::endl;
	try
	{
		Bureaucrat	cc("Vep", 10);
		Intern	bb;
		Form	*ff = bb.makeForm("robotomy request", "Bender");
		// std::cout << ff->get_name() << std::endl;
		// std::cout << ff->get_target() << std::endl;
		cc.signForm(*ff);
		cc.executeForm(*ff);
		delete ff;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------" << std::endl;
	try
	{
		Bureaucrat	cc("Vep", 2);
		Intern	bb;
		Form	*ff = bb.makeForm("presidental request", "President");
		// std::cout << ff->get_name() << std::endl;
		// std::cout << ff->get_target() << std::endl;
		cc.signForm(*ff);
		cc.executeForm(*ff);
		delete ff;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "--------------------" << std::endl;
	try
	{
		Bureaucrat	cc("Vep", 10);
		Intern	bb;
		Form	*ff = bb.makeForm("shrubbery request", "Bush");
		// std::cout << ff->get_name() << std::endl;
		// std::cout << ff->get_target() << std::endl;
		cc.signForm(*ff);
		cc.executeForm(*ff);
		delete ff;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
