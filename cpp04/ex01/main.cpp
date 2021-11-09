#include "animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "==========================================================" << std::endl;
		WrongAnimal	*beast = new WrongAnimal();
		WrongAnimal	*kitten = new WrongCat();
		kitten->makeSound();
		beast->makeSound();
		delete kitten;
		delete beast;
	}
	{
		std::cout << "==========================================================" << std::endl;
		Animal* doggy = new Dog();
		Animal* kitty = new Cat();
		std::cout << doggy->getType() << std::endl;
		std::cout << kitty->getType() << std::endl;
		kitty->makeSound(); //will output the cat sound!
		doggy->makeSound();
		Dog	*test = new Dog();
		test->setNewIdea("mad");
		test->setNewIdea("cc");
		Brain *b = new Brain();
		b->setNewIdea("idea");
		test->setBrain(b);
		std::cout << "IDEA " << test->getLastIdea() << std::endl;
		delete doggy;
		delete kitty;
		delete test;
	}
	{
		std::cout << "==========================================================" << std::endl;
		Animal **arr = (Animal **)malloc(10 * (sizeof(Animal *)));
		for (size_t i = 0; i < 5; i++)
		{
			arr[i] = new Cat();
		}
		for (size_t i = 5; i < 10; i++)
		{
			arr[i] = new Dog();
		}
		for (size_t i = 0; i < 10; i++)
		{
			delete arr[i];
		}
		delete arr;
	}
	{
		std::cout << "==========================================================" << std::endl;
		Cat kitty = Cat();
		Cat kitty_cc = Cat();
		Dog doggy = Dog();
		Dog doggy_cc = Dog();
		for (size_t i = 0; i < 78; i++)
		{
			kitty_cc.setNewIdea("idea " + std::to_string(i));
		}
		kitty = kitty_cc;
		std::cout << kitty.getBrain() << std::endl;
		std::cout << kitty_cc.getBrain() << std::endl;
		std::cout << kitty.getLastIdea() << std::endl;
		std::cout << kitty_cc.getLastIdea() << std::endl;
		kitty_cc.setNewIdea("test");
		std::cout << std::endl;
		std::cout << kitty.getLastIdea() << std::endl;
		std::cout << kitty_cc.getLastIdea() << std::endl;
		doggy = doggy_cc;
	}
}