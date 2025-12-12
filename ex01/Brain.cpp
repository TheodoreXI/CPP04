#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor is called.\n";
}
Brain::Brain(const Brain &obj)
{
	std::cout << "Brain Copy Constructor is called.\n";
	*this = obj;
}
Brain &Brain::operator=(const Brain &obj)
{
	return (*this);
}
Brain::~Brain(void)
{
	std::cout << "Brain Destructor is called.\n";
}