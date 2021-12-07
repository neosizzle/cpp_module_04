#include "Cat.hpp"

/*
** Methods
*/
void	Cat::makeSound() const
{
	std::cout << "meow\n";
}
Brain *Cat::getBrain() const
{
	return this->brain;
}
/*
** constructors n destructor
*/
Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &cat) : Animal()
{
	this->type = cat.getType();
	*(this->brain) = *(cat.getBrain());
	std::cout << "cat copy constructor called\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called\n";
}

Cat & Cat::operator = (const Animal &cat)
{
	this->type = cat.getType();
	*(this->brain) = *(cat.getBrain());
	std::cout << "Cat assignment operator called\n";
	return *this;
}