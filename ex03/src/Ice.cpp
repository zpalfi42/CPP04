#include <Ice.hpp>

Ice::Ice( void )
{
	this->AMateria::_type = "ice";
}

Ice::Ice( const Ice &i )
{
	this->AMateria::_type = i._type;
}

Ice	&Ice::operator=( const Ice &i )
{
	if (this != &i)
	{
		this->_type = i._type;
	}
	return (*this);
}

AMateria	*Ice::clone( void ) const
{
	return (new Ice( *this ));
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}