#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog Copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called\n";
	if (this != &other)
	{
		Animal::operator=(other);
		*(this->brain) = *(other.brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf\n";
}

Brain *Dog::getBrain() const
{
	return this->brain;
}
