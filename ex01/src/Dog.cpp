#include <Dog.hpp>

Dog::Dog( void )
{
	this->Animal::type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &dog )
{
	this->Animal::type = dog.type;
	this->brain = new Brain(*dog.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &dog )
{
	if (this != &dog)
	{
		this->type = dog.type;
		this->brain = dog.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	delete	this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof Woof" << std::endl;
}