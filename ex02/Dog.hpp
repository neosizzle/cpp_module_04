#ifndef __DOG__H__
#define __DOG__H__
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();
		Dog &operator = (const Animal &dog);

		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif  //!__DOG__H__