/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:17:12 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/26 15:26:27 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point& p) : x(p.getX()), y(p.getY()) {}

Point& Point::operator=(Point& p) {
	return p;
}

Point::~Point(void) {}

Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}