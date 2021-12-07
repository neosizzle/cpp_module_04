#ifndef __ANIMAL__H__
#define __ANIMAL__H__
#include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();
		Animal &operator = (const Animal &animal);

		std::string getType(void) const;

		virtual void		makeSound() const;
};


#endif  //!__ANIMAL__H__