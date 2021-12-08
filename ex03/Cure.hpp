#ifndef __CURE__H__
#define __CURE__H__
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &cure);
		virtual ~Cure(){};

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

		Cure & operator = (const Cure &cure);
};


#endif  //!__CURE__H__