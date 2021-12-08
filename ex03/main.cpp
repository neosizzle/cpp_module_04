#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void	print_nonl(std::string str)
{
	std::cout << str;
}


void	print(std::string str)
{
	std::cout << str << "\n";
}

int	main()
{
	print("=====DEFAULT TESTS====");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	print("================");

	print("=====MAT SRC TESTS====");
	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	print("");
	print_nonl("learn overflow test:		");
	src->learnMateria(new Ice());
	print_nonl("create non-existent test:	");
	src->createMateria("asdf");
	delete src;
	print("================");

	print("=====CHARACTER TESTS====");
	AMateria* tmp2;
	me = new Character("me");
	bob = new Character("bob");
	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("cure");
	me->equip(src->createMateria("ice"));
	me->equip(tmp);

	tmp2 = src->createMateria("cure");
	me->equip(src->createMateria("ice"));
	me->equip(tmp2);

	print("");
	print_nonl("equip overflow test:		");
	me->equip(src->createMateria("cure"));

	print_nonl("unequip test (idx 1):		");
	me->unequip(1);
	delete tmp;

	print_nonl("unequip test (idx 3):		");
	me->unequip(3);
	// delete tmp2;

	print_nonl("unequip test (idx 69):		");
	me->unequip(69);

	print_nonl("unequip test (idx -69):		");
	me->unequip(-69);

	print_nonl("use unequip test(idx 3):		");
	me->use(3, *bob);

	print_nonl("use unequip test(idx 0):		");
	me->use(0, *bob);

	print_nonl("use unequip test(idx 69):		");
	me->use(69, *bob);

	print_nonl("use unequip test(idx -69):		");
	me->use(-69, *bob);

	delete bob;
	// ommited because this testcase will not compile since bob cant be null
	// print_nonl("use unequip test(no target):		");
	// me->use(0, *bob);

	delete me;
	delete src;
	print("=======================");

	return 0;

}
