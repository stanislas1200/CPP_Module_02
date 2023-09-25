/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:30:56 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:30:56 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void) : fixedPointValue(0) {
	std::cout << BOLD "Default constructor called" R << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << CYAN "Copy constructor called" R << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << GRAY "Copy assignment operator called" R << std::endl;
	if (this != &src)
		fixedPointValue = src.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << RED "Destructor called" R << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << MAGENTA "getRawBits member function called" R << std::endl;
	return fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << YELLOW "setRawBits member function called" R << std::endl;
	fixedPointValue = raw;
}
