#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
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
