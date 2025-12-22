#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected:
		std::string name;
		AMateria	*ama_arr[4];
		AMateria	*ama_cpy[4];
    public:
        Character(void);
		Character(std::string val);
        ~Character(void);
        Character(const Character &obj);
        Character &operator=(const Character &obj);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};



#endif