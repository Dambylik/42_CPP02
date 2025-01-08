/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:26:03 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/04 14:40:11 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {

   return; 
}

Point::Point( Point const & src ) : _x(src._x), _y(src._y) {

    return;
}


Point::Point( float x, float y ) : _x(x), _y(y) {
    
    return;
}

Point::~Point() {
    
}

Point & Point::operator=( Point const & rhs ) {
    
    (void)rhs; 
    return (*this);
}

Fixed Point::getX() const {
    
    return (this->_x);
}

Fixed Point::getY() const {
    
    return (this->_y);
}
