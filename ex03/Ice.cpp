#include "Ice.hpp"

Ice::Ice(void)
	:AMateria("ice")
{
	std::cout << "Ice Default Constructor called.\n";
}
Ice::~Ice(void)
{
	std::cout << "Ice Destructor called.\n";
}

Ice::Ice(const Ice &obj)
{
	*this = obj;
}
Ice &Ice::operator=(const Ice &obj)
{
	this->type = obj.type;
	return (*this);
}
AMateria* Ice::clone() const
{
	return new Ice();
}
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n"; //must change name after
}