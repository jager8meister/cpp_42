#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*weapon;
	std::string	name;
public:
	HumanB();
	HumanB(std::string name);
	HumanB(std::string name, Weapon *weapon);
	~HumanB();
	void	attack();
    void    setWeapon(Weapon *weapon);
    void    setWeapon(Weapon &weapon);
};

#endif