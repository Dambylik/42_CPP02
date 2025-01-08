/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:17:49 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/04 14:48:51 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point {

    public:
    
        Point( void );                    
        Point( Point const & src );
        Point( float x, float y );                         
        ~Point();  

        Point & operator=( Point const & rhs );
        
        Fixed getX() const;
        Fixed getY() const;

    private:
    
        Fixed const _x;
        Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );