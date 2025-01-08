/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:23:02 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/05 11:50:00 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_bits = 8;

Fixed::Fixed( void ): _value(0) {
	
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed( void ) {
	
	std::cout << "Destructor called" << std::endl;
	return; 
}

Fixed	&Fixed::operator=( Fixed const & rhs ) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
		this->_value = rhs.getRawBits();
	return ( *this );
}

int	Fixed::getRawBits( void ) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return ( this->_value );
}

void	Fixed::setRawBits(const int raw) {
	
	this->_value = raw;
}