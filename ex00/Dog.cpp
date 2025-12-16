#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog was constructed\n";
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog was constructed from a copy\n";
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog was destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf\n";
}
