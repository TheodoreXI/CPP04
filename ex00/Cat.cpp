#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	std::cout << "Cat Default Constructor called.\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat Default Destructor called.\n";
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat meows.\n";
}