#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal was constructed\n";
	this->type = "animal";
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
	std::cout << "Animal was constructed from a copy\n";
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal was destroyed\n";
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "... some animal sound ...\n";
}