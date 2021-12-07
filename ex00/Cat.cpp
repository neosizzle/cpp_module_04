#include "Cat.hpp"

/*
** Methods
*/
void	Cat::makeSound() const
{
	std::cout << "meow\n";
}

/*
** constructors n destructor
*/
Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &cat) : Animal()
{
	*this = cat;
	std::cout << "cat copy constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

Cat & Cat::operator = (const Cat &cat)
{
	this->type = cat.getType();
	std::cout << "Cat assignment operator called\n";
	return *this;
}