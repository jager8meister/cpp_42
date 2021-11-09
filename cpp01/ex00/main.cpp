#include "Zombie.hpp"

int main()
{
    Zombie *z;
    z = newZombie("Greg");
    z->announce();
    randomChump("Fred");
    delete z;

    return 0;
}
