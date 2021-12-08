#ifndef __IMATERIASOURCE__H__
#define __IMATERIASOURCE__H__
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif  //!__IMATERIASOURCE__H__