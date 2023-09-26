/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:34:13 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/25 15:34:13 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point p(0, 0);
	if (bsp(Point(-1, -1), Point(0.5, 1), Point(1,-1), p))
		std::cout << CYAN "Inside" R << std::endl;
	else
		std::cout << RED "Outside" R << std::endl;
}