#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	:type("WrongAnimal")
{
	std::cout << "WrongAnimal Constructor called.\n";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
	std::cout << "WrongAnimal Copy Constructor called.\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type = obj.type;
	std::cout << "WrongAnimal Copy Assignement operator called.\n";
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}
void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal has no sound.\n";
}