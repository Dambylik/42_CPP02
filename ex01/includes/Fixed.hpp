/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:44:34 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/03 18:10:42 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>
#include <string>

class Fixed {
    
    public:
        
        Fixed( void );                                  
        Fixed( Fixed const & src );                     
        Fixed( int const i );                           
        Fixed( float const f );                         
        ~Fixed();                                      

        Fixed &	    operator=( Fixed const & rhs );     
        
        int		    getRawBits( void )			const;  
        void	    setRawBits( int const bit );
                
        float	    toFloat( void )				const;
        int		    toInt( void )				const;
        
    private:
    
	    int					_value; 
	    static int const	_bits;

};

std::ostream & operator<<(std::ostream & lhs, Fixed const & rhs); 


