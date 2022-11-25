#ifndef	MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <IMateriaSource.hpp>

class MateriaSource: public	IMateriaSource
{
private:
	AMateria	*_inventory[4];
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource &m );

	MateriaSource	&operator=( const MateriaSource &m );

	void		learnMateria(AMateria*);
	AMateria*	createMateria( std::string const &type);

	~MateriaSource();
};

#endif