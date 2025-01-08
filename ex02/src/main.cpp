/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:44:09 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/05 12:01:55 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

/* int main(void) {
	
    Fixed a(5);
    Fixed b(10);
    Fixed c(5.5f);
    Fixed d(5.5f);
	Fixed e(42.5f);

    std::cout << "Comparison Operators: a = 5, b = 10\n";
    std::cout << "5 > 10: " << (a > b ? "true" : "false") << std::endl;
    std::cout << "5 < 10: " << (a < b ? "true" : "false") << std::endl;
    std::cout << "5 >= 10: " << (a >= b ? "true" : "false") << std::endl;
    std::cout << "5 <= 10: " << (a <= b ? "true" : "false") << std::endl;
    std::cout << "5 == 10: " << (a == b ? "true" : "false") << std::endl;
    std::cout << "5 != 10: " << (a != b ? "true" : "false") << std::endl;

    std::cout << "\n";

    std::cout << "Arithmetic Operators: a = 5, b = 10\n";
    std::cout << "5 + 10 = " << a + b << std::endl;
    std::cout << "5 - 10 = " << a - b << std::endl;
    std::cout << "5 * 10 = " << a * b << std::endl;
    std::cout << "5 / 10 = " << a / b << std::endl;

    std::cout << "\n";

    std::cout << "Arithmetic Operators: c = 5.5, d = 5.5\n";
    std::cout << "5.5 + 5.5 = " << c + d << std::endl;
    std::cout << "5.5 - 5.5 = " << c - d << std::endl;
    std::cout << "5.5 * 5.5 = " << c * d << std::endl;
    std::cout << "5.5 / 5.5 = " << c / d << std::endl;

    std::cout << "\nTesting min/max with const references:\n";
    const Fixed &min_const = Fixed::min(a, e);
    const Fixed &max_const = Fixed::max(c, e);
    std::cout << "min(5, 42.5): " << min_const << std::endl;
    std::cout << "max(5.5, 42.5): " << max_const << std::endl;

    std::cout << "\nAdditional min/max tests:\n";
    std::cout << "min(10, 42.5): " << Fixed::min(b, e) << std::endl;
    std::cout << "max(10, 42.5): " << Fixed::max(b, e) << std::endl;
    std::cout << "min(5, 5.5): " << Fixed::min(a, c) << std::endl;
    std::cout << "max(5, 5.5): " << Fixed::max(a, c) << std::endl;

    return 0;
} */