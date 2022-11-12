#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal( void )
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wronganimal)
{
	this->type = wronganimal.type;
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &wronganimal )
{
	if (this != &wronganimal)
	{
		this->type = wronganimal.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout <<"(WrongAnimal sounds)" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}