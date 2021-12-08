#ifndef __MATERIASOURCE__H__
#define __MATERIASOURCE__H__
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
class MateriaSource :public IMateriaSource
{
	private:
		int	_num_materia;
		AMateria * _learnt_materias[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &materiasrc);

		MateriaSource & operator = (const MateriaSource &materiasrc);

		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* materia);
		virtual AMateria* createMateria(std::string const & type);
};

#endif  //!__MATERIASOURCE__H__