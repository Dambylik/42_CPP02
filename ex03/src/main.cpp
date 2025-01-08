/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:44:09 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/04 14:49:10 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main() {
    
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(2, 2);
    Point outside(11, 11);
    Point onEdge(5, 5);
    Point vertex(0, 0);

    std::cout << "Point inside: " << (bsp(a, b, c, inside) ? "True" : "False") << std::endl;
    std::cout << "Point outside: " << (bsp(a, b, c, outside) ? "True" : "False") << std::endl;
    std::cout << "Point on edge: " << (bsp(a, b, c, onEdge) ? "True" : "False") << std::endl;
    std::cout << "Point at vertex: " << (bsp(a, b, c, vertex) ? "True" : "False") << std::endl;

    return (0);
}
