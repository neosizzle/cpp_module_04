#ifndef __ANIMAL__H__
#define __ANIMAL__H__
#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	
	public:
		virtual Animal();
		virtual Animal(const Animal &animal);
		virtual ~Animal();
		virtual Animal &operator = (const Animal &animal) = 0;

		std::string getType(void);

		virtual void		makeSound() const = 0;
		virtual Brain *getBrain(void) const = 0;
};


#endif  //!__ANIMAL__H__