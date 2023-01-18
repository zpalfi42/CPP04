#include <Brain.hpp>

Brain::Brain( void )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Random sidea";
}

Brain::Brain ( const Brain &brain )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
}

Brain	&Brain::operator=( const Brain &brain )
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
}