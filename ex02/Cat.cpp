#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	b_cat = new Brain();
	std::cout << "Cat Default Constructor called.\n";
}

Cat::~Cat(void)
{
	delete b_cat;
	std::cout << "Cat Default Destructor called.\n";
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	this->b_cat = new Brain(*obj.b_cat);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat meows.\n";
}