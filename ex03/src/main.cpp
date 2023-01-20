#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>
#include "MateriaSource.hpp"

int	main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");


	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete(tmp);

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}