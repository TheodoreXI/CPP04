#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void	f()
{
	system("leaks Materia");
}

int main()
{
	atexit(f);
	IMateriaSource *a = new MateriaSource();
	a->learnMateria(new Ice());
	a->learnMateria(new Cure());
    AMateria* tmp;
    Character* me = new Character("me");
    tmp = a->createMateria("ice");
    me->equip(tmp);
    // tmp = a->createMateria("cure");
    me->equip(tmp);
    // tmp = a->createMateria("cure");
    me->equip(tmp);
    // tmp = a->createMateria("cure");
    me->equip(tmp);

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    delete me;
    delete a;
    return 0;
}