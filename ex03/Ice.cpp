#include "Ice.hpp"

/*
** Methods
*/
AMateria	* Ice::clone() const
{
	Ice *newIce;

	newIce = new Ice(*this); 
	return newIce;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

/*
** Constructors
*/
Ice::Ice() : AMateria("ice")
{
	this->_type = "ice";
}

Ice::Ice(const Ice &ice) : AMateria("ice")
{
	*this = ice;
}

Ice	&Ice::operator=( const Ice &ice )
{
	this->_type = ice.getType();
	return *this;
}