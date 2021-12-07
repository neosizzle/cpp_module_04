#include "Dog.hpp"

/*
** Methods
*/
void	Dog::makeSound() const
{
	std::cout << "woof\n";
}

Brain *Dog::getBrain() const
{
	return this->brain;
}

/*
** constructors n destructor
*/
Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &dog) : Animal()
{
	this->type = dog.getType();
	*(this->brain) = *(dog.getBrain());
	
	std::cout << "dog copy constructor called\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called\n";
}

Dog & Dog::operator = (const Animal &dog)
{
	this->type = dog.getType();
	*(this->brain) = *(dog.getBrain());

	std::cout << "dog assignment operator called\n";
	return *this;
}