#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		std::cout << "==========================================================" << std::endl;
		Cat kitty = Cat();
		Cat kitty_cc = Cat();
		Dog doggy = Dog();
		Dog doggy_cc = Dog();
		std::cout << "==========================================================" << std::endl;
		for (size_t i = 0; i < 78; i++)
		{
			kitty_cc.setNewIdea("idea " + std::to_string(i));
		}
		kitty = kitty_cc;
		std::cout << kitty.getLastIdea() << std::endl;
		std::cout << kitty_cc.getLastIdea() << std::endl;
		kitty_cc.setNewIdea("test");
		std::cout << std::endl;
		std::cout << kitty.getLastIdea() << std::endl;
		std::cout << kitty_cc.getLastIdea() << std::endl;
		doggy_cc.setNewIdea("idea");
		doggy = doggy_cc;
		std::cout << doggy_cc.getLastIdea() << std::endl;
		kitty.makeSound();
		kitty.printType();
		doggy.printType();
	}
}