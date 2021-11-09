#include "animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* doggy = new Dog();
	const Animal* kitty = new Cat();
	const WrongAnimal *wrong_cat = new WrongCat();
	const WrongAnimal *wrong_beast = new WrongAnimal();

	std::cout << "--------------------------------------" <<std::endl;
	std::cout << "dog type: " << doggy->getType() << std::endl;
	std::cout << "cat type: " << kitty->getType() << std::endl;
	std::cout << "animal type: " << animal->getType() << std::endl;
	// std::cout <<  (animal->getType() == "") << std::endl;
	std::cout << "--------------------------------------" <<std::endl;
	doggy->makeSound(); //will output the cat sound!
	kitty->makeSound();
	animal->makeSound();
	wrong_cat->makeSound();
	wrong_beast->makeSound();
	delete animal;
	delete doggy;
	delete kitty;
	delete wrong_cat;
	delete wrong_beast;
}