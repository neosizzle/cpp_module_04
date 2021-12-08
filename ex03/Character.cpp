#include "Character.hpp"

/*
** Methods
*/
std::string const & Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* m)
{
	if (this->_num_equipped > 3)
	{
		std::cout << "inventory is full, cant equip \n";
		delete m; //required?
		return ;
	}
	this->_materias[_num_equipped] = m;
	this->_num_equipped ++ ;
	std::cout << "Equipped " << m->getType() << " at idx "<< this->_num_equipped - 1 << " \n";
}

void	Character::unequip(int idx)
{
	int i;

	std::cout << "Unequipping materia at idx " << idx << " .. ";
	i = idx + 1;
	if (idx < 0)
	{
		std::cout << "Invalid unequip at idx " << idx << "!\n";
		return ;
	}
	while (i < 4 && this->_materias[i])
	{
		this->_materias[i - 1] = this->_materias[i];
		i++;
	}
	if (i > 4)
	{
		std::cout << "Invalid unequip at idx " << idx << "!\n";
		return ;
	}
	this->_materias[i - 1] = NULL;
	this->_num_equipped--;
	std::cout << "Unequipped!\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= _num_equipped || idx < 0)
	{
		std::cout << "No materia at slot " << idx << "!\n";
		return ;
	}
	this->_materias[idx]->use(target);
}

/*
** Constrctors n destructors
*/
Character::Character(): _name(""), _num_equipped(0)
{
	int	i;

	i = -1;
	while (++i < 4)
		this->_materias[i] = 0;
	
}

Character::Character(std::string name): _name(name), _num_equipped(0)
{
	int	i;

	i = -1;
	while (++i < 4)
		this->_materias[i] = 0;
}

Character::Character(const Character & character)
{
	*this = character;
}

Character::~Character()
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (this->_materias[i] != NULL)
		{
			delete this->_materias[i];
		}
	}
}

Character & Character::operator = (const Character & character)
{
	int	i;

	this->_num_equipped = 0;
	this->_name = character.getName();
	i = -1;
	while (++ i < 4)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		this->_materias[i] = character._materias[i];
		if (character._materias[i])
			this->_num_equipped++;
	}
	return *this;
}
