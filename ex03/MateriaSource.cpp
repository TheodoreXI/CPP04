#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria *a)
{
	for (int i = 0; i < 4; i++)
	{
		if (ama_src[i] == a)
			return ;
		if (!ama_src[i])
		{
			ama_src[i] = a;
			return;
		}
	}
	delete a;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (ama_src[i])
		{
			if (ama_src[i]->getType() == type)
			{
				return (ama_src[i]->clone());
			}
		}
	}
	return (0);

}

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		ama_src[i] = NULL;
	}
}
MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete ama_src[i];
	}
	std::cout << "MateriaSource Destructor called.\n";
}
MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			this->ama_src[i] = obj.ama_src[i]->clone();
		}
	}
	return (*this);
}
