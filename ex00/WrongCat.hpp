#ifndef __WRONGCAT__H__
#define __WRONGCAT__H__
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	WrongCat(const WrongCat &wrongcat);
	~WrongCat();
	WrongCat &operator = (const WrongCat &wrongcat);

	void	makeSound() const;
};

#endif  //!__WRONGCAT__H__