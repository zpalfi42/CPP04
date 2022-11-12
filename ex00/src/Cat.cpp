#include <Cat.hpp>

Cat::Cat( void )
{
	this->Animal::type = "Cat";
	std::cout << "Cat default constructor called!" << std::endl;
}

Cat::Cat( const Cat &cat )
{
	this->Animal::type = cat.type;
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat	&Cat::operator=( const Cat &cat )
{
	if (this != &cat)
	{
		this->type = cat.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called!" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miau Miau" << std::endl;
}