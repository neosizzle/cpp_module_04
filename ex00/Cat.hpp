#ifndef __CAT__H__
#define __CAT__H__
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat(const Cat &cat);
	~Cat();
	Cat &operator = (const Cat &cat);

	void	makeSound() const;
};

#endif  //!__CAT__H__