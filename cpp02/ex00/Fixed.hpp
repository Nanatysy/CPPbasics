#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H

#include <iostream>

class Fixed {

private:
	static const int	_shift;
	int					_value;

public:
	Fixed( void );
	Fixed(Fixed const & src);
	~Fixed( void );

	Fixed & operator=(Fixed const & src);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

};


#endif //CPP02_FIXED_H
