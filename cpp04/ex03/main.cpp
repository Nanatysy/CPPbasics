#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	{
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
	}

	std::cout << "---------------***-------------------" << std::endl;

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");

		std::cout << "---------" << std::endl;
		me->equip(tmp);
		me->equip(tmp);
		std::cout << "---------" << std::endl;

		tmp = src->createMateria("ice");
		me->equip(tmp);

		tmp = src->createMateria("ice");
		me->equip(tmp);

		tmp = src->createMateria("ice");
		me->equip(tmp);

		tmp = src->createMateria("ice");
		me->equip(tmp);

		delete tmp;

		delete me;
		delete src;
	}

	std::cout << "---------------***-------------------" << std::endl;

	{
		AMateria* tmp1;
		AMateria* tmp2;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		tmp1 = src->createMateria("icE");
		tmp1 = src->createMateria("ice");
		tmp2 = src->createMateria("cure");

		ICharacter* me = new Character("me");

		me->equip(tmp2);
		me->use(0, *me);

		tmp2 = tmp1;

		me->equip(tmp2);
		me->use(1, *me);

		tmp1 = src->createMateria("ice");
		src->learnMateria(tmp1);
		src->learnMateria(tmp1);

		delete me;
		delete src;
	}

	return (0);
}

