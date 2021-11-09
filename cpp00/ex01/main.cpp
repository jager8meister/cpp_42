#include "phonebook.hpp"


int main()
{
    phonebook book;
    std::string input;

    while (input != "EXIT" && std::getline(std::cin, input))
    {
        if (input == "ADD")
        {
			if (book.add() == false)
			{
				break;
			}
        }
        else if (input == "SEARCH")
        {
			if (book.search() == false)
			{
				break;
			}
        }
        else if (input == "")
        {
            std::cout << "Empty command" << std::endl;
        }
        else if (input == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Wrong command" << std::endl;
        }
    }

    return 0;
}
