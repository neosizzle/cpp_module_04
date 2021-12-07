#ifndef __WRONGANIMAL__H__
#define __WRONGANIMAL__H__
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wronganimal);
		~WrongAnimal();
		WrongAnimal &operator = (const WrongAnimal &wronganimal);

		std::string getType(void) const;

		void		makeSound() const;
};


#endif  //!__WRONGANIMAL__H__