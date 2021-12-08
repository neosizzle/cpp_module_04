#include "MateriaSource.hpp"


/*
** Methods
*/


void	MateriaSource::learnMateria(AMateria* m)
{
	if (_num_materia > 3)
	{
		std::cout << "materias full, cant learn \n";
		delete m; // required ?
		return ;
	}
	this->_learnt_materias[_num_materia++] = m;
	std::cout << "Learnt " << m->getType() << " at idx "<< _num_materia - 1 << " \n";
}

AMateria* MateriaSource::createMateria(std::string const & type){
	int	i;

	i = -1;
	while (++i < _num_materia)
	{
		if (this->_learnt_materias[i]->getType() == type)
			return this->_learnt_materias[i]->clone();
	}
	std::cout << "Invalid type\n";
	return 0;
}

/*
** Constrctors n destructors
*/
MateriaSource::MateriaSource(): _num_materia(0)
{
	int	i;

	i = -1;
	while (++i < 4)
		this->_learnt_materias[i] = 0;
	
}


MateriaSource::MateriaSource(const MateriaSource & materiasrc)
{
	*this = materiasrc;
}

MateriaSource::~MateriaSource()
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (this->_learnt_materias[i])
		{
						delete this->_learnt_materias[i];
		}
	}
	
}

MateriaSource & MateriaSource::operator = (const MateriaSource & materiasrc)
{
	int	i;

	this->_num_materia = 0;
	i = -1;
	while (++ i < 4)
	{
		if (this->_learnt_materias[i])
			delete this->_learnt_materias[i];
		this->_learnt_materias[i] = materiasrc._learnt_materias[i];
		if (materiasrc._learnt_materias[i])
			this->_num_materia++;
	}
	return *this;
}
