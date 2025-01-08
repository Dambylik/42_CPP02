/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:50:26 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/05 12:02:48 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed( void ) : _value(0) {
	
	return;
}

Fixed::Fixed( Fixed const & src ) {
	
	*this = src;
	return;
}

Fixed::Fixed( int const i ) {
	
	this->_value = i * 256; 
}

Fixed::Fixed( float const f ) {
	
	this->_value = roundf(f * 256);
}

Fixed::~Fixed() {
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	
	if ( this != &rhs )
		this->_value = rhs.getRawBits();
	return ( *this );
}

std::ostream & operator<<(std::ostream & lhs, Fixed const & rhs) {
	
	lhs << rhs.toFloat();
	return (lhs);
}

// ---------------------------------------------------------- Accessors:

int	Fixed::getRawBits(void)	const {
	
	return (this->_value);
}

void	Fixed::setRawBits(int const bit) {
	
	this->_value = bit;
}

// ---------------------------------------------------------- Member functions:

int	Fixed::toInt(void)	const {
	
	return (this->_value / 256);
}

float	Fixed::toFloat(void)	const {
	
	return ((float)this->_value / 256);
}

Fixed &	Fixed::min(Fixed & n1, Fixed & n2) {
	
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed const &	Fixed::min(Fixed const & n1, Fixed const & n2) {
	
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed &	Fixed::max(Fixed & n1, Fixed & n2) {
	
	if (n1 > n2)
		return (n1);
	return (n2);
}

Fixed const &	Fixed::max(Fixed const & n1, Fixed const & n2) {
	
	if (n1 > n2)
		return (n1);
	return (n2);
}

// ---------------------------------------------------------- Arithmetic operators:

Fixed 	Fixed::operator+(Fixed const & rhs) const {
    
	Fixed result;
    result._value = this->_value + rhs._value;
    return (result);
}

Fixed 	Fixed::operator-(Fixed const & rhs) const {
	
    Fixed result;
    result._value = this->_value - rhs._value;
    return (result);
}

Fixed 	Fixed::operator*(Fixed const & rhs) const {
    
	Fixed result;
    result._value = (this->_value * rhs._value) >> _bits;
    return (result);
}

Fixed 	Fixed::operator/(Fixed const & rhs) const {
    
	Fixed result;
	if (rhs._value == 0)
	{
		std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return (result);
	}
	result._value = (this->_value << _bits) / rhs._value;
    return (result);
}

// ---------------------------------------------------------- Increment/decrement:

Fixed &	Fixed::operator++( void ) {
	
	++this->_value;
	return ( *this );
}

Fixed	Fixed::operator++( int i ) {
	
	(void) i;
	Fixed cpy(*this);
	++this->_value;
	return ( cpy );
}

Fixed &	Fixed::operator--( void ) {
	
	--this->_value;
	return ( *this );
}

Fixed	Fixed::operator--(int i) {
	
	(void)i;
	Fixed cpy(*this);
	--this->_value;
	return ( cpy );
}

// ---------------------------------------------------------- Comparison operators:

bool	Fixed::operator>( Fixed const & rhs )	const {
	
	return ( this->_value > rhs._value );
}

bool	Fixed::operator>=( Fixed const & rhs )	const {
	
	return ( this->_value >= rhs._value );
}

bool	Fixed::operator<( Fixed const & rhs )	const {
	
	return ( this->_value < rhs._value );
}

bool	Fixed::operator<=( Fixed const & rhs )	const {
	
	return ( this->_value <= rhs._value );
}

bool	Fixed::operator==( Fixed const & rhs )	const {
	
	return ( this->_value == rhs._value );
}

bool	Fixed::operator!=( Fixed const & rhs )	const {
	
	return ( this->_value != rhs._value );
}
