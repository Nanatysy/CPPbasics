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

	bool operator>(Fixed const & src) const;
	bool operator<(Fixed const & src) const;
	bool operator>=(Fixed const & src) const;
	bool operator<=(Fixed const & src) const;
	bool operator==(Fixed const & src) const;
	bool operator!=(Fixed const & src) const;
	Fixed operator+(Fixed const & src) const;
	Fixed operator-(Fixed const & src) const;
	Fixed operator*(Fixed const & src) const;
	Fixed operator/(Fixed const & src) const;
	Fixed operator++(void);
	Fixed operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed const & min(Fixed const & a, Fixed const &b);
	static Fixed const & max(Fixed const & a, Fixed const &b);
	static Fixed & min(Fixed & a, Fixed &b);
	static Fixed & max(Fixed & a, Fixed &b);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	int toInt( void ) const;
	float toFloat( void ) const;

};

std::ostream & operator<<(std::ostream & out, Fixed const & num);


#endif //CPP02_FIXED_H
