#ifndef __CHARACTER__H__
#define __CHARACTER__H__
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character :public ICharacter
{
	private :
		std::string _name;
		AMateria 	*_materias[4];
		int			_num_equipped;
	
	public :
		Character();
		Character(std::string name);
		Character( const Character &character );

		Character & operator = (const Character &character);

		virtual std::string const & getName() const;
		virtual ~Character();
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		void	setName(std::string name);

};

#endif  //!__CHARACTER__H__