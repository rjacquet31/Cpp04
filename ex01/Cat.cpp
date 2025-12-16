#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
	this->type = "Cat";
	std::cout << "Cat Default constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat Copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called\n";
	if (this != &other)
	{
		Animal::operator=(other);
		*(this->brain) = *(other.brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou\n";
}

Brain *Cat::getBrain() const
{
	return this->brain;
}
