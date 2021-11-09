#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "--------------" << std::endl;
	try
	{
		Bureaucrat	bb("Vep", 150);
		Form		ff("problem", 140, 150);
		bb.signForm(ff);
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
		Form		ff("problem", -1, 0);
		bb.signForm(ff);
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
		Form		ff("problem", 170, 170);
		bb.signForm(ff);
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
		Form		ff("problem", 70, 7);
		bb.signForm(ff);
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
		Form		ff("problem", 70, 11);
		bb.signForm(ff);
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
