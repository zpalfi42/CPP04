#include <AMateria.hpp>

AMateria::AMateria( void ): _type("undefined")
{
}

AMateria::AMateria( std::string	&type ): _type(type)
{
}

AMateria::AMateria( const AMateria &a ): _type(a._type)
{
}

AMateria::~AMateria()
{
}

AMateria	&AMateria::operator=( const AMateria &a )
{
	if (this != &a)
		this->_type = a._type;
	return (*this);
}

std::string const	&AMateria::getType( void ) const
{
	return (this->_type);
}

void	AMateria::use( ICharacter &target)
{
	(void) target;
}