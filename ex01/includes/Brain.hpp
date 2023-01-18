#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
public:
	Brain( void );
	Brain( const Brain &brain );

	Brain &operator=( const Brain &brain );

	~Brain();

private:
	std::string	ideas[100];
};

#endif