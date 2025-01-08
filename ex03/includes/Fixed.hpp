/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:44:34 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/04 12:37:51 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	public:

		Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const i );
		Fixed( float const f );
		~Fixed();

		Fixed &	operator=( Fixed const & rhs );

		Fixed 	operator+( Fixed const & rhs ) 	const;
		Fixed 	operator-( Fixed const & rhs ) 	const;
		Fixed 	operator*( Fixed const & rhs ) 	const;
		Fixed 	operator/( Fixed const & rhs )	const;

		Fixed &	operator++( void );
		Fixed	operator++( int i );
		Fixed &	operator--( void );
		Fixed	operator--( int i );

		bool	operator>( Fixed const & rhs )	const;
		bool	operator>=( Fixed const & rhs )	const;
		bool	operator<( Fixed const & rhs )	const;
		bool	operator<=( Fixed const & rhs )	const;
		bool	operator==( Fixed const & rhs )	const;
		bool	operator!=( Fixed const & rhs )	const;
		
		int		getRawBits( void )				const;
		void	setRawBits( int const bit );
		float	toFloat( void )					const;
		int		toInt( void )					const;
		
		static Fixed &			min( Fixed & n1, Fixed & n2 );
		static Fixed const &	min( Fixed const & n1, Fixed const & n2 );
		static Fixed &			max( Fixed & n1, Fixed & n2 );
		static Fixed const &	max( Fixed const & n1, Fixed const & n2 );

	private:
	
		int					_value;
		static int const	_bits;

};

std::ostream & operator<<(std::ostream & lhs, Fixed const & rhs);
