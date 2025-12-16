#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal was constructed\n";
	this->type = "Animal";
}

AAnimal::AAnimal(const AAnimal &other)
{
	this->type = other.type;
	std::cout << "Animal was constructed from a copy\n";
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal was destroyed\n";
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::makeSound() const
{
	std::cout << "... some animal sound ...\n";
}