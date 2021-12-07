#include "WrongAnimal.hpp"

/*
**Methods
*/
void WrongAnimal::makeSound() const
{
	std::cout << "[wronganimal noises]\n";
}

std::string WrongAnimal::getType() const
{
	return type;
}
/*
** constructors n destructor
*/
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal)
{
	*this = wronganimal;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &wronganimal)
{
	this->type = wronganimal.getType();
	std::cout << "WrongAnimal assignment operator called\n";
	return *this;
}
