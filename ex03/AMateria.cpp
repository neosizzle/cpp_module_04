#include "AMateria.hpp"

/*
** methods
*/
std::string const & AMateria::getType() const
{
	return _type;
}

/*
** Constructors
*/
AMateria::AMateria()
{ 
	_type = "";
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator = (const AMateria &amateria)
{
	this->_type = amateria.getType();
	return *this;
}