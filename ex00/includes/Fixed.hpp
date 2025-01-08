/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:55:18 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/03 12:37:39 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed {
	
	public:
	
		Fixed( void );
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed &				operator=( Fixed const & rhs );
		int					getRawBits( void ) 	const;
		void				setRawBits( int const raw );

	private:
	
		int					_value;
		static const int	_bits;
	
};
