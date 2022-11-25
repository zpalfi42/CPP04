#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

#include <ICharacter.hpp>
#include <AMateria.hpp>

class Character: public	ICharacter
{
private:
	AMateria	*_inventory[4];
	std::string	_name;
public:
	Character( void );
	Character( const std::string name );
	Character( const Character &c );

	Character	&operator=( const Character &c );

	std::string	const	&getName( void );
	void				equip( AMateria	*m );
	void				unequip( int	idx );
	void				use( int idx, ICharacter	&target );
	
	virtual	~Character();
};


#endif