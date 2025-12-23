#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	b_dog = new Brain();
	std::cout << "Dog Default Constructor called.\n";
}

Dog::~Dog(void)
{
	delete b_dog;
	std::cout << "Dog Default Destructor called.\n";
}

Dog::Dog(const Dog &obj)
{
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		this->b_dog = new Brain(*obj.b_dog);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks.\n";
}