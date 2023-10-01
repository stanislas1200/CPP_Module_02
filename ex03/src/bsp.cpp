/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:53:13 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/30 15:38:31 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

float get_area(Point a, Point b, Point c) {
    float area = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) /2;
    return area >= 0 ? area : area *-1;
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    
    float A = get_area(a, b, c);
    float A1 = get_area(point, b, c);
    float A2 = get_area(a, point, c);
    float A3 = get_area(a, b, point);
    return (A1== 0 && A2 == 0 && A3 == 0) ? false : A == A1 + A2 + A3;
}