#include "Cure.hpp"

/*
** Methods
*/
AMateria * Cure::clone() const
{
	Cure *newCure;

	newCure = new Cure(*this); 
	return newCure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals  " << target.getName() << "'s wounds *\n";
}

/*
** Constructors
*/
Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &cure) : AMateria("cure")
{
	*this = cure;
}

Cure	&Cure::operator=( const Cure &cure )
{
	this->_type = cure.getType();
	return *this;
}