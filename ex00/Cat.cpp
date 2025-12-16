#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat was constructed\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat was constructed from a copy\n";
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat was destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou\n";
}
