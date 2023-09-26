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

// Point::Point(Point& p) {
//     *this = p;
// }

// Point& Point::operator=(Point& p) {
//     if (this != &p)
//     {
// 		x = p.x;
// 		y = p.y;
//     }
// 	return *this;
// }

Point::~Point(void) {}

Point::getX(void) {
    return this->x;
}

Point::getY(void) {
    return this->y;
}