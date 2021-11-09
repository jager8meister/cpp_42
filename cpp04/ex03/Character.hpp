#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &chel);
		Character& operator=(const Character &chel);
		std::string const &getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		~Character();
};


#endif