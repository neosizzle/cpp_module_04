#ifndef __ICE__H__
#define __ICE__H__
#include "AMateria.hpp"

class Ice :public AMateria
{
	public:
		Ice( void );
		Ice(const Ice &ice);
		virtual ~Ice( void ){};

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

		Ice & operator = (const Ice &ice);
};


#endif  //!__ICE__H__