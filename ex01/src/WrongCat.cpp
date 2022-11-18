#include <WrongCat.hpp>

WrongCat::WrongCat( void )
{
	this->type = "wrongcat";
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat &wrongcat )
{
	this->type = wrongcat.type;
	std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &wrongcat )
{
	if (this != &wrongcat)
	{
		this->type = wrongcat.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}