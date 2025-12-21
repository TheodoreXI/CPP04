#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria	*ama_src[4];
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &obj);
		MateriaSource	&operator=(const MateriaSource &obj);
	    void learnMateria(AMateria *a);
        AMateria* createMateria(std::string const & type);
};


#endif