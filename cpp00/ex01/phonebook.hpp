#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class contact
{
private:
	std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
	std::string rawFirstName;
    std::string rawLastName;
    std::string rawNickname;
    std::string rawPhoneNumber;
    std::string rawDarkestSecret;
public:
    contact();
    contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
    ~contact();
	void	setFirstName(std::string input);
	void	setLastName(std::string input);
	void	setNickname(std::string input);
	void	setPhoneNumber(std::string input);
	void	setDarkestSecret(std::string input);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();
	std::string	getRawFirstName();
	std::string	getRawLastName();
	std::string	getRawNickname();
	std::string	getRawPhoneNumber();
	std::string	getRawDarkestSecret();
	void clearIt();
};

class phonebook
{
private:
    contact arr[10];
	int		bookSize;
public:
    phonebook();
    ~phonebook();
	bool	add();
	bool	search();
	contact getContact(int index);
};


#endif