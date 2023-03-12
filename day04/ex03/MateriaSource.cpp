#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
    *this = obj;
}

MateriaSource& MateriaSource::operator= (const MateriaSource& obj)
{
    for (int i = 0; i < 4; i++)
        if (obj._materia[i])
            this->_materia[i] = obj._materia[i]->clone();
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (!_materia[i])
        {
            _materia[i] = m;
            return ;
        }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (_materia[i] && _materia[i]->getType() == type)
            return _materia[i]->clone();
    return NULL;
}
