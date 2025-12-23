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
	if (this != &obj)
	{
		for (int i = 0; i< 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor is called.\n";
}