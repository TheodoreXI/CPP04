#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	Brain *d = new Brain();
	Brain *d2 = new Brain();
	delete d;
	d = d2;
	delete d2;

	const Animal *a[100];
	for (int i = 0; i < 100; i++)
	{
		if (i > 50)
		{
			a[i] = new Cat();
		}
		else
		{
			a[i] = new Dog();
		}
	}
	for (int i = 0; i < 100; i++)
	{
		a[i]->makeSound();
		delete a[i];
	}
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	return 0;
}
