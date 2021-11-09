#include "Bureaucrat.hpp"

int	main()
{
	/*lowest grade*/
	try
	{
		Bureaucrat bb("Vep", 150);
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	/*lowest grade exception*/
	try
	{
		Bureaucrat bb("Vep", 170);
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	/*highest grade exception*/
	try
	{
		Bureaucrat bb("Vep", 0);
		std::cout << bb << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	/*highest grade exception by increasing*/
	try
	{
		Bureaucrat bb("Vep", 10);
		std::cout << bb << std::endl;
		while (true)
		{
			bb.incr_grade();
			std::cout << bb << std::endl;
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	/*lowest grade exception by decreasing*/
	try
	{
		Bureaucrat bb("Vep", 140);
		std::cout << bb << std::endl;
		while (true)
		{
			bb.decr_grade();
			std::cout << bb << std::endl;
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
