/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgodin <sgodin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:10:23 by sgodin            #+#    #+#             */
/*   Updated: 2023/09/26 15:26:28 by sgodin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "./Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const float x, const float y);
		// Point(Point& p);
		// Point& operator=(Point& p);
		~Point(void);
		Fixed getX(void);
		Fixed getY(void);
		
	private:
		const Fixed x;
		const Fixed y;
};

#endif