#include "Cure.hpp"

Cure::Cure(void)
    :type("Cure")
{
    std::cout << "Cure Default Construtor called.";
}
Cure::~Cure(void);
Cure::Cure(const Cure &obj);
Cure::Cure &operator=(const Cure &obj);