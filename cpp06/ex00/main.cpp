// #include "Converter.hpp"
#include <sstream>

#include <iostream>
#include <vector>
#include <limits>

class Converter
{
	private:
		std::string			_i_val;
		std::string			_d_val;
		std::string			_f_val;
		std::string			_c_val;
		const std::string	_input;
		bool				_was_dot;
		int					_dots;
		int					_int_size;
		char				_valid_syms[4];
		bool				_valid_input;
		int					_fraction_part;
		Converter();
		class InvalidAction: public std::exception
		{
			public:
				const char* what(void) const throw();
		};
		Converter	&operator=(const Converter &obj);
		Converter(const Converter &obj);
		bool		checkInt();
		bool		checkDouble();
		bool		checkFloat();
		bool		checkChar();
		void		checkDot();
		void		int_size_finder();
		bool		is_valid_sym(const char sym);
		size_t		size_of_whole_part();
		void		fraction_part();
	public:
		Converter(std::string input);
		~Converter();
};


Converter::Converter()
{
	throw InvalidAction();
}

Converter	&Converter::operator=(const Converter &obj)
{
	(void)obj;
	throw InvalidAction();
}

Converter::~Converter()
{
	
}

const char*	Converter::InvalidAction::what(void) const throw()
{
	return "Invalid action";
}

Converter::Converter(const Converter &obj)
{
	(void)obj;
	throw InvalidAction();
}

bool	Converter::is_valid_sym(const char sym)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (sym == this->_valid_syms[i])
		{
			return true;
		}
	}
	return false;
}

size_t	Converter::size_of_whole_part()
{
	size_t res = 0;
	for (size_t i = 0; i < this->_input.length(); i++)
	{
		if (this->_input[i] == '.')
		{
			break;
		}
		else
		{
			res++;
		}
	}
	
	return res;
}


bool	Converter::checkInt()
{
	if (this->_valid_input == false)
	{
		return false;
	}
	
	if (this->_input.length() == 0 || this->_input.length() > 10)
	{
		this->_i_val = "impossible";
		return false;
	}
	
	for (size_t i = 0; i < this->_input.length(); i++) {
		if (!isdigit(this->_input[i]) && !this->is_valid_sym(this->_input[i]))
		{
			this->_i_val = "impossible";
			return false;
		}
	}
	int		num = atoi(this->_input.c_str());
	long	num_l = atol(this->_input.c_str());
	long	check = static_cast<long>(num);
	if (check != num_l)
	{
		this->_i_val = "impossible";
		return false;
	}
	std::stringstream stream;
	stream << (atoi(this->_input.c_str()));
	std::string	num_str = stream.str();
	this->_i_val = num_str;
	return true;
}

bool	Converter::checkDouble()
{
	if (this->_valid_input == false)
	{
		return false;
	}
	if (this->_input.compare("inf") == 0 || this->_input.compare("inff") == 0 || \
		this->_input.compare("+inf") == 0 || this->_input.compare("+inff") == 0 || \
		this->_input.compare("-inf") == 0 || this->_input.compare("-inff") == 0 || \
		this->_input.compare("nan") == 0 || this->_input.compare("nanf") == 0)
	{
		if (this->_input.compare("inf") == 0 || this->_input.compare("inff") == 0 || \
			this->_input.compare("+inf") == 0 || this->_input.compare("+inff") == 0)
		{
			this->_d_val = "+inf";
		}
		else if (this->_input.compare("-inf") == 0 || this->_input.compare("-inff") == 0)
		{
			this->_d_val = "-inf";
		}
		else
		{
			this->_d_val = "nan";
		}
		return true;
	}
	if (this->checkInt())
	{
		std::stringstream stream;
		stream << (atof(this->_input.c_str()));
		std::string	num = stream.str();
		if (this->_fraction_part == 0)
		{
			num += ".0";
		}
		this->_d_val = num;
		
		return true;
	}
	if (this->checkFloat())
	{
		std::stringstream stream;
		stream << (atof(this->_input.c_str()));
		std::string	num = stream.str();
		if (this->_fraction_part == 0)
		{
			num += ".0";
		}
		this->_d_val = num;
		return true;
	}
	
	std::stringstream stream;
	stream << (atof(this->_input.c_str()));
	std::string	num = stream.str();
	if (this->_fraction_part == 0)
	{
		num += ".0";
	}
	this->_d_val = num;
	if (num.compare("inf") == 0)
	{
		this->_d_val = "+inf";
	}
	
	return true;
}

bool	Converter::checkFloat()
{
	if (this->_valid_input == false)
	{
		return false;
	}
	
	if (this->_input.compare("inf") == 0 || this->_input.compare("inff") == 0 || \
		this->_input.compare("+inf") == 0 || this->_input.compare("+inff") == 0 || \
		this->_input.compare("-inf") == 0 || this->_input.compare("-inff") == 0 || \
		this->_input.compare("nan") == 0 || this->_input.compare("nanf") == 0)
	{
		if (this->_input.compare("inf") == 0 || this->_input.compare("inff") == 0 || \
			this->_input.compare("+inf") == 0 || this->_input.compare("+inff") == 0)
		{
			this->_f_val = "+inff";
		}
		else if (this->_input.compare("-inf") == 0 || this->_input.compare("-inff") == 0)
		{
			this->_f_val = "-inff";
		}
		else
		{
			this->_f_val = "nanf";
		}
		return true;
	}
	if (this->checkInt())
	{
		std::stringstream stream;
		stream << (atof(this->_input.c_str()));
		std::string	num = stream.str();
		if (this->_fraction_part == 0)
		{
			num += ".0";
		}
		num += "f";
		this->_f_val = num;
		return true;
	}
	if (this->size_of_whole_part() > 0)
	{
		if (atof(this->_input.c_str()) > std::numeric_limits<float>::max() || \
			atof(this->_input.c_str()) < std::numeric_limits<float>::min())
		{
			if (atof(this->_input.c_str()) > std::numeric_limits<float>::max())
			{
				this->_f_val = "+inff";
			}
			else
			{
				this->_f_val = "-inff";
			}
			return false;
		}
		std::stringstream stream;
		stream << (atof(this->_input.c_str()));
		std::string	num = stream.str();
		if (this->_fraction_part == 0)
		{
			num += ".0";
		}
		
		num += "f";
		this->_f_val = num;
		return true;
	}
	else
	{
		this->_f_val = "impossible";
		return false;
	}
}

bool	Converter::checkChar()
{
	if ((this->_valid_input == false || this->checkInt() == false) && this->_input.length() > 1)
	{
		return false;
	}
	
	int	num = static_cast<int>(atoi(this->_input.c_str()));
	if (this->checkInt() == false && this->_input.length() == 1)
	{
		num = this->_input[0];
		this->_c_val = std::string(1, this->_input[0]);
		std::stringstream stream;
		stream << num;
		std::string	num_str = stream.str();
		this->_i_val = num_str;
		this->_d_val = num_str + ".0";
		this->_f_val = num_str + ".0" + "f";
		return true;
	}
	
	if (num < 128 && num >= 0)
	{
		int	number = atoi(this->_input.c_str());
		if (isprint(number))
		{
			this->_c_val = std::string(1, static_cast<char>(number));
		}
		else
		{
			this->_c_val = "Non displayable";
		}
		return true;
	}
	this->_c_val = "impossible";
	return false;
}

void	Converter::int_size_finder()
{
	size_t i = 0;
	for (; i < this->_input.length(); i++)
	{
		if (this->_input[i] == '.')
		{
			break;
		}
	}
	this->_int_size = i;
}

void	Converter::checkDot()
{
	this->_dots = 0;
	this->_valid_input = true;
	if (this->_input.compare("nan") == 0 || \
		this->_input.compare("nanf") == 0 || \
		this->_input.compare("inf") == 0 || \
		this->_input.compare("inff") == 0 || \
		this->_input.compare("-inf") == 0 || \
		this->_input.compare("-inff") == 0 || \
		this->_input.compare("+inf") == 0 || \
		this->_input.compare("+inff") == 0)
	{
		this->_was_dot = false;
		return ;
	}
	else
	{
		for (size_t i = 0; i < this->_input.length(); i++)
		{
			if (this->_input[i] == '.')
			{
				this->_was_dot = true;
				this->_dots++;
			}
			else if (this->_input[i] == 'f' && i != this->_input.length() - 1)
			{
				this->_valid_input = false;
				return ;
			}
			else if (!isdigit(this->_input[i]) && this->_input[i] != 'f' && this->_input[i] != '.' && this->_input[i] != '+' && this->_input[i] != '-')
			{
				this->_valid_input = false;
				return ;
			}
			else if ((this->_input[i] == '+' || this->_input[i] == '-') && (i != 0))
			{
				this->_valid_input = false;
				return ;
			}
		}
		if (this->_dots > 1)
		{
			this->_valid_input = false;
			return ;
		}
	}
}

void		Converter::fraction_part()
{
	this->_fraction_part = 0;
	bool	dot = false;
	int		f = 0;
	for (size_t i = 0; i < this->_input.length(); i++)
	{
		if (this->_input[i] == '.')
		{
			dot = true;
			continue;
		}
		if (dot == true)
		{
			f = f * 10 + atoi(std::string(1, this->_input[i]).c_str());
		}
	}
	this->_fraction_part = f;
}

Converter::Converter(std::string input) : _input(input)
{
	this->_valid_syms[0] = 'f';
	this->_valid_syms[1] = '.';
	this->_valid_syms[2] = '+';
	this->_valid_syms[3] = '-';

	this->checkDot();
	this->fraction_part();

	this->_i_val = "impossible";
	this->_d_val = "impossible";
	this->_f_val = "impossible";
	this->_c_val = "impossible";
	

	this->checkInt();
	this->checkDouble();
	this->checkFloat();
	this->checkChar();

	std::cout << "char: " << this->_c_val << std::endl;
	std::cout << "int: " << this->_i_val << std::endl;
	std::cout << "float: " << this->_f_val << std::endl;
	std::cout << "double: " << this->_d_val << std::endl;
}



int	main(int argc, char **argv)
{
	try
	{
		if (argc == 2)
		{
			Converter cc(argv[1]);
		}
		else
		{
			std::cout << "Wrong amount of args" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}