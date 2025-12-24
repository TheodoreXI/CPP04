#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	// ImateriaSource *src = new MateriaSource();
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	for (int i = 0; i < 5; i++)
	{
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->unequip(i);
	}
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	delete me;
	delete src;
	// delete tmp;
	return 0;
}