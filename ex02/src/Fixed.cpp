/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:34:03 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:34:03 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void) : fixedPointValue(0) {
	std::cout << CYAN "Default constructor called" R << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << CYAN "Copy constructor called" R << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << GRAY "Copy assignment operator called" R << std::endl;
	if (this != &src)
		fixedPointValue = src.fixedPointValue;
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

Fixed::Fixed(const int value) {
	std::cout << CYAN "Int constructor called" R << std::endl;
	fixedPointValue = value << fractionalBits;
}

Fixed::Fixed(const float value) {
	std::cout << CYAN "Float constructor called" R << std::endl;
	fixedPointValue = roundf(value * (1 << fractionalBits));
}

float Fixed::toFloat(void) const {
	return (float)fixedPointValue / (1 << fractionalBits);
}

int Fixed::toInt(void) const {
	return fixedPointValue >> fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>(const Fixed& src) {
	// TODO
		return false;
	return true;
}