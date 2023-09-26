/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:53:13 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/26 15:25:11 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Fixed get_area(Point a, Point b, Point c) {
    return Fixed((a.getX() * (b.getY() - c.getY()) + b.getX()*(c.getY()-a.getX())+ c.getX()*(a.getY()-b.getY()))/2.0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){
    
    Fixed A = get_area(a, b, c);
    Fixed A1 = get_area(point, b, c);
    Fixed A2 = get_area(a, point, c);
    Fixed A3 = get_area(a, b, point);
    
    return A == A1 + A2 + A3;
}