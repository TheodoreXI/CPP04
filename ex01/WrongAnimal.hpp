#ifndef WRONGAnimal_HPP
#define WRONGAnimal_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal &operator=(const WrongAnimal &obj);
		std::string	getType(void) const;
		void		makeSound(void) const;
		virtual		~WrongAnimal(void);
};


#endif