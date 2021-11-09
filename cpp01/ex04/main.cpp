#include "replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong amount of args" << std::endl;
		return 0;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Invalid arguments" << std::endl;
		return 0;
	}
	std::ifstream	file;
	file.open(filename.c_str());
	if (!file.is_open())
	{
		std::cout << "Unable to file " << filename << std::endl;
		return 0;
	}
	file.close();
	replace rep = replace(s1, s2, filename.c_str());
	
	return 0;
}
