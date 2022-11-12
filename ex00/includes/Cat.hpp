#ifndef CAT_HPP
# define CAT_HPP

#include <Animal.hpp>

class Cat: public Animal
{
public:
	Cat( void );
	Cat( const Cat &cat );

	Cat	&operator=( const Cat &cat );

	~Cat();

	void		makeSound( void ) const;
};

#endif