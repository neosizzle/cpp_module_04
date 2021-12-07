#ifndef __CAT__H__
#define __CAT__H__
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	
	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();
		Cat &operator = (const Animal &cat);

		void	makeSound() const;
		Brain	*getBrain() const;
};

#endif  //!__CAT__H__