/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:24:38 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/04 14:34:05 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const & a, Point const & b, Point const & c) {

    float x1 = a.getX().toFloat();
    float y1 = a.getY().toFloat();
    float x2 = b.getX().toFloat();
    float y2 = b.getY().toFloat();
    float x3 = c.getX().toFloat();
    float y3 = c.getY().toFloat();

    float totalArea = 0.5f * std::abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    return Fixed(totalArea);
}


bool bsp( Point const a, Point const b, Point const c, Point const point ) {
    
    Fixed totalArea = area(a, b, c);
    Fixed area1 = area(point, b, c);
    Fixed area2 = area(a, point, c);
    Fixed area3 = area(a, b, point);

    if (area1 == 0 || area2 == 0 || area3 == 0)
        return ( false) ;
    return ( area1 + area2 + area3 == totalArea );
}
