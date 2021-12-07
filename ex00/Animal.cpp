#include "Animal.hpp"

/*
**Methods
*/
void Animal::makeSound() const
{
	std::cout << "[animal noises]\n";
}

std::string Animal::getType() const
{
	return type;
}
/*
** constructors n destructor
*/
Animal::Animal()
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

Animal & Animal::operator = (const Animal &animal)
{
	this->type = animal.getType();
	std::cout << "Animal assignment operator called\n";
	return *this;
}
