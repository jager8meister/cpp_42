#include "phonebook.hpp"


contact::contact()
{
}

contact::contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

contact::~contact()
{
}

void	contact::setFirstName(std::string input)
{
    this->rawFirstName = input;
    if (input.length() > 10)
	{
		input = input.substr(0, 9);
		input.append(".");	
	}
	this->firstName = input;
}

void	contact::setLastName(std::string input)
{
    this->rawLastName = input;
    if (input.length() > 10)
	{
		input = input.substr(0, 9);
		input.append(".");	
	}
	this->lastName = input;
}

void	contact::setNickname(std::string input)
{
    this->rawNickname = input;
    if (input.length() > 10)
	{
		input = input.substr(0, 9);
		input.append(".");	
	}
	this->nickname = input;
}

void	contact::setPhoneNumber(std::string input)
{
    this->rawPhoneNumber = input;
    if (input.length() > 10)
	{
		input = input.substr(0, 9);
		input.append(".");	
	}
	this->phoneNumber = input;
}

void	contact::setDarkestSecret(std::string input)
{
    this->rawDarkestSecret = input;
    if (input.length() > 10)
	{
		input = input.substr(0, 9);
		input.append(".");	
	}
	this->darkestSecret = input;
}

std::string	contact::getFirstName()
{
	return this->firstName;
}

std::string	contact::getLastName()
{
	return this->lastName;
}

std::string	contact::getNickname()
{
	return this->nickname;
}

std::string	contact::getPhoneNumber()
{
	return this->phoneNumber;
}

std::string	contact::getDarkestSecret()
{
	return this->darkestSecret;
}


std::string	contact::getRawFirstName()
{
	return this->rawFirstName;
}

std::string	contact::getRawLastName()
{
	return this->rawLastName;
}

std::string	contact::getRawNickname()
{
	return this->rawNickname;
}

std::string	contact::getRawPhoneNumber()
{
	return this->rawPhoneNumber;
}

std::string	contact::getRawDarkestSecret()
{
	return this->rawDarkestSecret;
}

void contact::clearIt()
{
	this->darkestSecret.clear();
	this->firstName.clear();
	this->lastName.clear();
	this->nickname.clear();
	this->phoneNumber.clear();
}



phonebook::phonebook()
{
	bookSize = 0;
}

phonebook::~phonebook()
{
}


bool phonebook::add()
{
	contact arr[10];
	if (this->bookSize == 8)
	{
		int i = 0;
		while (i < this->bookSize)
		{
			arr[i] = this->arr[i + 1];
			i++;
		}
		arr[this->bookSize].clearIt();
	}
	else
	{
		int i = 0;
		while (i < this->bookSize)
		{
			arr[i] = this->arr[i];
			i++;
		}
	}
	std::cout << "Enter First Name: ";
	std::string input;
	if (!std::getline(std::cin, input))
	{
		return false;
	}
	
	
	while (input.length() < 1)
	{
		std::cout << "Wrong input\n";
		std::cout << "Enter First Name: ";
		if (!std::getline(std::cin, input))
		{
			return false;
		}
	}
	arr[this->bookSize].setFirstName(input);


	std::cout << "Enter Last Name: ";

	if (!std::getline(std::cin, input))
	{
		return false;
	}
	while (input.length() < 1)
	{
		std::cout << "Wrong input\n";
		std::cout << "Enter Last Name: ";
		if (!std::getline(std::cin, input))
		{
			return false;
		}
	}
	arr[this->bookSize].setLastName(input);


	std::cout << "Enter Nickname: ";

	if (!std::getline(std::cin, input))
	{
		return false;
	}
	while (input.length() < 1)
	{
		std::cout << "Wrong input\n";
		std::cout << "Enter Nickname: ";
		if (!std::getline(std::cin, input))
		{
			return false;
		}
	}
	arr[this->bookSize].setNickname(input);


	std::cout << "Enter Phone Number: ";

	if (!std::getline(std::cin, input))
	{
		return false;
	}
	while (input.length() < 1)
	{
		std::cout << "Wrong input\n";
		std::cout << "Enter Phone Number: ";
		if (!std::getline(std::cin, input))
		{
			return false;
		}
	}
	arr[this->bookSize].setPhoneNumber(input);
	

	std::cout << "Enter Darkest Secret: ";

	if (!std::getline(std::cin, input))
	{
		return false;
	}
	while (input.length() < 1)
	{
		std::cout << "Wrong input\n";
		std::cout << "Enter Darkest Secret: ";
		if (!std::getline(std::cin, input))
		{
			return false;
		}
	}
	arr[this->bookSize].setDarkestSecret(input);

	int i = 0;
	while (i < this->bookSize)
	{
		this->arr[i] = arr[i];
		i++;
	}
	i = 0;
	while (i <= this->bookSize)
	{
		int j = i;
		if (arr[i].getFirstName() == "")
		{
			i++;
		}
		
		this->arr[j] = arr[i];
		i++;
	}
	if (this->bookSize < 8)
	{
		this->bookSize++;
	}
	return true;
}

contact phonebook::getContact(int index)
{
    return this->arr[index];
}

bool	phonebook::search()
{
	int i;
	i = 0;
	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	while (i < this->bookSize)
	{
		std::cout << "|" << std::setw(10) <<  i + 1;
		std::cout << "|" << std::setw(10) <<  this->arr[i].getFirstName();
		std::cout << "|" << std::setw(10) <<  this->arr[i].getLastName();
		std::cout << "|" << std::setw(10) <<  this->arr[i].getNickname() << "|" << std::endl;
		i++;
	}
    if (this->bookSize == 0)
    {
        return true;
    }
    std::string input;
    std::cout << "ENTER INDEX : ";
	if (!std::getline(std::cin, input))
	{
		return false;
	}
    while ((input.length() != 1) || ((int)input[0] < (48 + 1) || (int)input[0] > (48 + this->bookSize)))
    {
        std::cout << "Invalid index" << std::endl;
        std::cout << "ENTER INDEX : ";
		if (!std::getline(std::cin, input))
		{
			return false;
		}
    }
    int index = (int)input[0] - 49;
    contact raws = this->getContact(index);
    std::cout << "First Name : " << raws.getRawFirstName() << std::endl;
    std::cout << "Last Name : " << raws.getRawLastName() << std::endl;
    std::cout << "Nickname : " << raws.getRawNickname() << std::endl;
    std::cout << "Phone Number : " << raws.getRawPhoneNumber() << std::endl;
    std::cout << "Darkest Secret : " << raws.getRawDarkestSecret() << std::endl;
	return true;
}
