#include "Fixed.hpp"


Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int value) {
	this->setRawBits(value << Fixed::_shift);
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float value) {
	_value = (int)roundf(value * (2 << (Fixed::_shift - 1)));
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & src) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}


int Fixed::getRawBits( void ) const {
	return _value;
}

void Fixed::setRawBits( int const raw ) {
	_value = raw;
	return ;
}

int Fixed::toInt( void ) const {
	return _value >> Fixed::_shift;
}

float Fixed::toFloat( void ) const {
	return (float)_value / (2 << (Fixed::_shift - 1));
}

std::ostream & operator<<(std::ostream & out, Fixed const & num) {
	out << num.toFloat();
	return out;
}

const int Fixed::_shift = 8;
