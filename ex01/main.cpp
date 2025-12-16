#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "\n=== First Test ===\n";
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n=== makeSound() test ===\n";
	j->makeSound();
	i->makeSound();

	std::cout << "\n=== Deleting through Animal* ===\n";
	delete j;
	delete i;

	std::cout << "\n=== Second Test ===\n";
	const Animal* animals[4];

	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	std::cout << "\n=== Ideas of first Dog ===\n";
	const Dog *firstDog = dynamic_cast<const Dog *>(animals[0]);
	if (firstDog)
	{
		std::string *ideas = firstDog->getBrain()->getIdeas();
		for (int i = 0; i < 100; i++)
			std::cout << "Idea[" << i << "] = " << ideas[i] << "\n";
	}

	std::cout << "\n=== Delete ===\n";
	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "\n=== Third Test ===\n";
	Cat originalCat;

	std::cout << "\n=== Original Cat ideas ===\n";
	std::string *catIdeas = originalCat.getBrain()->getIdeas();
	for (int i = 0; i < 100; i++)
		std::cout << "Idea[" << i << "] = " << catIdeas[i] << "\n";

	Cat copiedCat(originalCat);

	std::cout << "\n=== Copied Cat ideas ===\n";
	std::string *copiedIdeas = copiedCat.getBrain()->getIdeas();
	for (int i = 0; i < 100; i++)
		std::cout << "Idea[" << i << "] = " << copiedIdeas[i] << "\n";
	std::cout << "\n=== End of program ===\n";
	return 0;
}

