#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Dog Default Constructor called.\n";
}

Dog::~Dog(void)
{
	std::cout << "Dog Default Destructor called.\n";
}

Dog::Dog(const Dog &obj)
{
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks.\n";
}