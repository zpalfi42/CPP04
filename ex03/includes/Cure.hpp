#ifndef	CURE_HPP
# define	CURE_HPP

# include <AMateria.hpp>

class Cure: public AMateria
{
public:
	Cure( void );
	Cure( const Cure &c );

	Cure	&operator=( const Cure &c );

	AMateria	*clone( void ) const;
	void		use( ICharacter &target );

	~Cure();
};

#endif