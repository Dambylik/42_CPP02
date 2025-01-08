/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:50:26 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/05 11:50:15 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_bits = 8;

Fixed::Fixed( void ) : _value(0) {
	
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed( int const i ) {
	
	std::cout << "Int constructor called" << std::endl;
	this->_value = i * 256;
	return;
}

Fixed::Fixed( float const f ) {
	
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * 256);
	return;
}

Fixed::~Fixed() {
	
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs ) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_value = rhs.getRawBits();
	return ( *this );
}

int	Fixed::getRawBits( void )	const {
	
	return ( this->_value );
}

void	Fixed::setRawBits( int const bit ) {
	
	this->_value = bit;
	return;
}

int	Fixed::toInt( void )	const {
	
	return ( this->_value / 256 );
}

float	Fixed::toFloat( void )	const {

	return ( (float)this->_value / 256 );
}

std::ostream & operator<<( std::ostream & lhs, Fixed const & rhs ) {
	
	lhs << rhs.toFloat();
	return ( lhs );
}
