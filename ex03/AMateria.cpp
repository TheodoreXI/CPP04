#include "AMateria.hpp"


AMateria::AMateria(std::string const & type)
	:type(type)
{
	std::cout << "AMateria parametrized Constructor called.\n";
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << target.getName() <<"default sound\n";
}

AMateria::AMateria(void)
	:type("Amateria")
{
	std::cout << "AMateria Default Constructor called.\n";
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Desctructor called.\n";
}
