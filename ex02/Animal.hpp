#ifndef __ANIMAL__H__
#define __ANIMAL__H__
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();
		virtual Animal &operator = (const Animal &animal);

		std::string getType(void) const;

		virtual void		makeSound() const;
		virtual Brain *getBrain(void) const = 0;
};


#endif  //!__ANIMAL__H__