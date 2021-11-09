#include <iostream>

void	make_it_big(char *str)
{
	for (size_t i = 0; str[i]; i++)
		std::cout << (char)std::toupper(str[i]);
}

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
			make_it_big(argv[i]);
		std::cout << std::endl;
	}
}