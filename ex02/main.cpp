#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int	main()
{
	//Animal *nope = new Animal("asd");
	int num_of_animals;
	int	i;

	num_of_animals = 8;
	Animal *animals[num_of_animals];
	i = -1;
	while (++i < num_of_animals / 2)
		animals[i] = new Dog();
	while (i < num_of_animals)
		animals[i++] = new Cat();

	std::cout << "\n";
	
	animals[0]->getBrain()->ideas[0] = "zeroth idea\n";
	std::cout << "animals 0 idea[0] " << animals[0]->getBrain()->ideas[0];
	*(animals[1]) = *(animals[0]);
	animals[0]->getBrain()->ideas[0] = "zeroth idea changed\n";
	std::cout << "animals 0 idea[0] " << animals[0]->getBrain()->ideas[0];
	std::cout << "animals 1 idea[0] " << animals[1]->getBrain()->ideas[0];
	std::cout << "\n";

	i = -1;
	while (++i < num_of_animals)
		delete animals[i];
	
	
	return 0;
}
