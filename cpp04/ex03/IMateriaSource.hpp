#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	// private:
	// 	IMateriaSource(){};
	// 	IMateriaSource(const IMateriaSource &mat){};
	// 	IMateriaSource	&operator=(const IMateriaSource& mat) {return *this;};
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif