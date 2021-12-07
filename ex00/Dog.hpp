#ifndef __DOG__H__
#define __DOG__H__
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	Dog(const Dog &dog);
	~Dog();
	Dog &operator = (const Dog &dog);

	void	makeSound() const;
};

#endif  //!__DOG__H__