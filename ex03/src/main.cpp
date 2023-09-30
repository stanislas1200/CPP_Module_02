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

void print_pos(bool inside) {
	inside ? std::cout << CYAN "Inside" R << std::endl : std::cout << RED "Outside" R << std::endl;
}

int main( void ) {
	print_pos(bsp(Point(-1, -1), Point(0, 1), Point(1, -1), Point(50, 50)));	// far
	print_pos(bsp(Point(-1, -1), Point(0, 1), Point(1, -1), Point(0, 0)));		// middle
	print_pos(bsp(Point(-1, -1), Point(0, 1), Point(1, -1), Point(1, -1)));		// corner
	print_pos(bsp(Point(-1, -1), Point(0, 1), Point(1, -1), Point(1, -1.1)));	// outside corner
	print_pos(bsp(Point(-1, -1), Point(0, 1), Point(1, -1), Point(1, -0.9)));	// outside corner
	print_pos(bsp(Point(-1, -1), Point(0, 1), Point(1, -1), Point(0.9, -1)));	// inside corner
	print_pos(bsp(Point(1, 0), Point(0, 0), Point(0, 1), Point(0.5, 0.5)));		// middle
	print_pos(bsp(Point(0, 0), Point(0, 0), Point(0, 0), Point(0, 0)));			// no area
}