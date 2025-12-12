#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	f(void)
{
	system("leaks Brain");
}

int main()
{
	atexit(f);
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
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	return 0;
}