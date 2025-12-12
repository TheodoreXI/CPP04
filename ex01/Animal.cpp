#include "Animal.hpp"

Animal::Animal(void)
	:type("Animal")
{
	std::cout << "Animal Constructor called.\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called.\n";
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Animal Copy Constructor called.\n";
}

Animal &Animal::operator=(const Animal &obj)
{
	this->type = obj.type;
	std::cout << "Animal Copy Assignement operator called.\n";
	return (*this);
}

std::string Animal::getType(void) const
{
	return (type);
}
void	Animal::makeSound(void) const
{
	std::cout << "Animal has no sound.\n";
}