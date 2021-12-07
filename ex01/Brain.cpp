#include "Brain.hpp"


/*
Constructors and destructos
*/
Brain::Brain()
{
	std::cout << "brain default constructor called\n";
}

Brain::~Brain()
{
	std::cout << "brain default destructor called\n";
}

Brain::Brain(const Brain &brain)
{
	int	i;
	
	std::cout << "brain copy constructor called\n";
	i = -1;
	while (++i < 100)
		this->ideas[i] = brain.ideas[i];	
}

Brain & Brain::operator = (const Brain &brain)
{
	int	i;

	std::cout << "brain assignment operator called\n";
	i = -1;
	while (++i < 100)
		this->ideas[i] = brain.ideas[i];
	return *this;
}