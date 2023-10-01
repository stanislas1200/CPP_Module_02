/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:34:19 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:34:19 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed& operator=(const Fixed &src);
		~Fixed(void);

		Fixed(const int value);
		Fixed(const float value);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;


		bool operator>(const Fixed &src);
		bool operator<(const Fixed &src);
		bool operator>=(const Fixed &src);
		bool operator<=(const Fixed &src);
		bool operator==(const Fixed &src);
		bool operator!=(const Fixed &src);

		float operator+(const Fixed src);
		float operator-(const Fixed src);
		float operator*(const Fixed src);
		float operator/(const Fixed src);

		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);

		static Fixed& min(Fixed& src, Fixed& src2);
		static const Fixed& min(const Fixed& src, const Fixed& src2);
		static Fixed& max(Fixed& src, Fixed& src2);
		static const Fixed&  max(const Fixed& src, const Fixed& src2);		

	private:
		int					fixedPointValue;
		static const int	fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif