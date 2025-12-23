#include "Cure.hpp"

Cure::Cure(void)
	:AMateria("cure")
{
	std::cout << "Cure Default Constructor called.\n";
}
Cure::~Cure(void)
{
	std::cout << "Cure Destructor called.\n";
}

Cure::Cure(const Cure &obj)
{
	*this = obj;
}
Cure &Cure::operator=(const Cure &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}
AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}