#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

# include <ICharacter.hpp>

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria( void );
	AMateria( std::string &type );
	AMateria( const AMateria &a );

	AMateria	&operator=( const AMateria &a );

	std::string const	&getType( void ) const;

	virtual	AMateria	*clone( void ) const = 0;
	virtual	void		use( ICharacter &target );

	virtual	~AMateria();
};

#endif