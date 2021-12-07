#include "Dog.hpp"

/*
** Methods
*/
void	Dog::makeSound() const
{
	std::cout << "woof\n";
}

/*
** constructors n destructor
*/
Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &dog) : Animal()
{
	*this = dog;
	std::cout << "dog copy constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

Dog & Dog::operator = (const Dog &dog)
{
	this->type = dog.getType();
	std::cout << "dog assignment operator called\n";
	return *this;
}