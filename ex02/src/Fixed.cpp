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
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
	if (this != &src)
		fixedPointValue = src.fixedPointValue;
	return *this;
}

Fixed::~Fixed(void) {
}

int Fixed::getRawBits(void) const {
	return fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	fixedPointValue = raw;
}

Fixed::Fixed(const int value) {
	fixedPointValue = value << fractionalBits;
}

Fixed::Fixed(const float value) {
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
	return this->fixedPointValue > src.fixedPointValue;
}

bool Fixed::operator<(const Fixed& src) {
	return this->fixedPointValue < src.fixedPointValue;
}

bool Fixed::operator>=(const Fixed& src) {
	return this->fixedPointValue >= src.fixedPointValue;
}

bool Fixed::operator<=(const Fixed& src) {
	return this->fixedPointValue <= src.fixedPointValue;
}

bool Fixed::operator==(const Fixed& src) {
	return this->fixedPointValue == src.fixedPointValue;
}

bool Fixed::operator!=(const Fixed& src) {
	return this->fixedPointValue != src.fixedPointValue;
}


// return Fixed ?
float Fixed::operator+(const Fixed src) {
	return (this->toFloat() + src.toFloat());
}

float Fixed::operator-(const Fixed src) {
	return (this->toFloat() - src.toFloat());
}

float Fixed::operator*(const Fixed src) {
	return (this->toFloat() * src.toFloat());
}

float Fixed::operator/(const Fixed src) {
	return (this->toFloat() / src.toFloat());
}

Fixed Fixed::operator++(void) {
	this->fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->fixedPointValue++;
	return tmp;
}

Fixed Fixed::operator--(void) {
	this->fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->fixedPointValue--;
	return tmp;
}

Fixed& Fixed::min(Fixed& src, Fixed& src2) {
	if (src > src2)
		return src2;
	return src;
}

const Fixed& Fixed::min(const Fixed& src, const Fixed& src2) {
	if (src.fixedPointValue > src2.fixedPointValue)
		return src2;
	return src;
}

Fixed& Fixed::max(Fixed& src, Fixed& src2) {
	if (src < src2)
		return src2;
	return src;
}

const Fixed& Fixed::max(const Fixed& src, const Fixed& src2) {
	if (src.fixedPointValue < src2.fixedPointValue)
		return src2;
	return src;
}