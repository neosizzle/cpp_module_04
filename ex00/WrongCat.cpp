#include "WrongCat.hpp"

/*
** Methods
*/
void	WrongCat::makeSound() const
{
	std::cout << "woof\n";
}

/*
** constructors n destructor
*/
WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal()
{
	*this = wrongcat;
	std::cout << "wrongcat copy constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

WrongCat & WrongCat::operator = (const WrongCat &wrongcat)
{
	this->type = wrongcat.getType();
	std::cout << "wrongcat assignment operator called\n";
	return *this;
}