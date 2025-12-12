#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *b_dog;
	public:
		Dog(void);
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		void	makeSound(void) const;
		~Dog(void);
};

#endif