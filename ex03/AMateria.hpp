#ifndef __AMATERIA__H__
#define __AMATERIA__H__

#include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &amateria);
		virtual ~AMateria();

		std::string const & getType() const; 
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

		AMateria & operator = (const AMateria &amateria);
};

#endif  //!__AMATERIA__H__