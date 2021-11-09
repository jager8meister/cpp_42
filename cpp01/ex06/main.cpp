#include "Karen.hpp"

int main(int argc, char **argv)
{
	switch (argc)
	{
		case 2:
			break;
		default:
			std::cout << "Invalid amount of args" << std::endl;
			return 0;
			break;
	}
	Karen kar;
	kar.karenSwitch(argv[1]);
	return 0;
}
