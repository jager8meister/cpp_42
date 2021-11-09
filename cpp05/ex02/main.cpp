#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	bb("Vep", 150);
		PresidentialPardonForm ff("target");
		bb.signForm(ff);
		bb.executeForm(ff);
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	bb("Vep", 10);
		RobotomyRequestForm ff("target");
		bb.signForm(ff);
		bb.executeForm(ff);
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	bb("Vep", 10);
		ShrubberyCreationForm ff("target");
		bb.signForm(ff);
		bb.executeForm(ff);
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	bb("Vep", 100);
		PresidentialPardonForm ff("target");
		bb.signForm(ff);
		bb.executeForm(ff);
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
