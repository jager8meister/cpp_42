#include "Zombie.hpp"

int main()
{
	Zombie *z;
	z = new Zombie("Greg");
	z->announce();
	randomChump("Fred");
	delete z;
	Zombie *horde;
	horde = zombieHorde(8, "JIM");
	for (int i = 0; i < 8; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
