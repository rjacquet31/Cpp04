#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "ideasssss";
	std::cout << "brain constructed and filled with ideas\n";
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "brain destroyed\n";
}

Brain::Brain(Brain & ref)
{
	std::string *ref_ideas = ref.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref_ideas[i] + " copy";
	std::cout << "brain copy constructed and stole the other's ideas\n";
}

Brain &Brain::operator=(Brain const &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}