#include <Cure.hpp>

Cure::Cure( void )
{
	this->AMateria::_type = "cure";
}

Cure::Cure( const Cure &c )
{
	this->AMateria::_type = c._type;
}

Cure	&Cure::operator=( const Cure &c )
{
	if (this != &c)
	{
		this->_type = c._type;
	}
	return (*this);
}

AMateria	*Cure::clone( void ) const
{
	return (new Cure( *this ));
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}