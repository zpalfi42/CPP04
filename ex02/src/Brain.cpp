#include <Brain.hpp>

Brain::Brain( void )
{
}

Brain::Brain ( const Brain &brain )
{
	(void) brain;
}

Brain	&Brain::operator=( const Brain &brain )
{
	(void) brain;
	if (this != &brain)
	{
	}
	return (*this);
}

Brain::~Brain()
{
}