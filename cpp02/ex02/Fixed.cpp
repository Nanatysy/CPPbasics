#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int value) {
	this->setRawBits(value << Fixed::_shift);
//	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float value) {
	_value = (int)roundf(value * (2 << (Fixed::_shift - 1)));
//	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
//	std::cout << "Copy constructor called" << std::endl;
	_value = src.getRawBits();
	return ;
}

Fixed::~Fixed( void ) {
//	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & src) {
//	std::cout << "Assignation operator called" << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed const & src) const {
	return (_value > src.getRawBits());
}

bool Fixed::operator>=(Fixed const & src) const {
	return (_value >= src.getRawBits());
}

bool Fixed::operator<(Fixed const & src) const {
	return (_value < src.getRawBits());
}

bool Fixed::operator<=(Fixed const & src) const {
	return (_value <= src.getRawBits());
}

bool Fixed::operator==(Fixed const & src) const {
	return (_value == src.getRawBits());
}

bool Fixed::operator!=(Fixed const & src) const{
	return (_value != src.getRawBits());
}

Fixed Fixed::operator+(Fixed const & src) const {
	Fixed tmp(this->toFloat() + src.toFloat());
	return (tmp);
}

Fixed Fixed::operator-(Fixed const & src) const {
	Fixed tmp(this->toFloat() - src.toFloat());
	return (tmp);
}

Fixed Fixed::operator*(Fixed const & src) const {
	Fixed tmp(this->toFloat() * src.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(Fixed const & src) const {
	Fixed tmp(this->toFloat() / src.toFloat());
	return (tmp);
}

Fixed Fixed::operator++(void) {
	_value += 1;
	return (*this);
}

Fixed Fixed::operator--(void) {
	_value -= 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const &b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
	if (a > b)
		return (a);
	return (b);
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
