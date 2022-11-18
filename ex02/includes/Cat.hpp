#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>
# include <Brain.hpp>

class Cat: public Animal
{
private:
	const Brain	*brain;
public:
	Cat( void );
	Cat( const Cat &cat );

	Cat	&operator=( const Cat &cat );

	~Cat();

	void		makeSound( void ) const;
};

#endif