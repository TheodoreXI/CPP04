#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << "WrongCat Default Constructor called.\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Default Destructor called.\n";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	this->type = obj.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat meows.\n";
}