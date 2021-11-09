#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of the string:\t " << &str << std::endl;
	std::cout << "Address of the string using stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Address of the string using stringREF:\t" << &stringREF << std::endl;
	std::cout << "String from the pointer:\t" << *stringPTR  << std::endl;
	std::cout << "String from the reference:\t" << stringREF << std::endl;
	std::string *ptr = &stringREF;
	std::cout << ptr << std::endl;
}