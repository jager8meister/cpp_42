#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*arr[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &mat);
		MateriaSource	&operator=(const MateriaSource &mat);
		void			learnMateria(AMateria* mat);
		AMateria*		createMateria(std::string const & type);
		~MateriaSource();
};

#endif