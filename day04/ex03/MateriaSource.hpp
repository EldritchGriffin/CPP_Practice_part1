#ifndef MATERIALSOURCE_HPP
#define MATERIALSOURCE_HPP

#include <iostream>

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materia[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator= (const MateriaSource& obj);

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif