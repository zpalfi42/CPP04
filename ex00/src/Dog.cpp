#include <Dog.hpp>

Dog::Dog( void )
{
	this->Animal::type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &dog )
{
	this->Animal::type = dog.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &dog )
{
	if (this != &dog)
	{
		this->type = dog.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof Woof" << std::endl;
}