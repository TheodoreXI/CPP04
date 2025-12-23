#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called.\n";
	for (int i = 0; i < 4; i++)
	{
		ama_cpy[i] = NULL;
		ama_arr[i] = NULL;
	}
}

Character::Character(std::string val)
	:name(val)
{
	std::cout << "Character Parametrized Constructor called.\n";
	for (int i = 0; i < 4; i++)
	{
		ama_cpy[i] = NULL;
		ama_arr[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->ama_cpy[i];
		delete this->ama_arr[i];
	}
	std::cout << "Character default destructor called.\n";
}

Character::Character(const Character &obj)
{
	*this = obj;
}
Character &Character::operator=(const Character &obj)
{
	this->name = obj.name;
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->ama_arr[i];
			this->ama_arr[i] = obj.ama_arr[i]->clone();
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		delete ama_cpy[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (ama_arr[i] == m)
			return ;
		if (!ama_arr[i])
		{
			ama_arr[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !ama_arr[idx])
		return ;
	ama_cpy[idx] = ama_arr[idx];
	ama_arr[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !ama_arr[idx])
		return ;
	ama_arr[idx]->use(target);
}