#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

private:
	static const int	_shift;
	int					_value;

public:
	Fixed( void );
	Fixed(int value);
	Fixed(float value);
	Fixed(Fixed const & src);
	~Fixed( void );

	Fixed & operator=(Fixed const & src);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	int toInt( void ) const;
	float toFloat( void ) const;

};

std::ostream & operator<<(std::ostream & out, Fixed const & num);


#endif //CPP02_FIXED_H
