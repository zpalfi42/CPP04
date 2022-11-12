#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &wronganimal);

		WrongAnimal	&operator=( const WrongAnimal &wronganimal );

		~WrongAnimal();

		void		makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif