/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:25:10 by sasha             #+#    #+#             */
/*   Updated: 2023/03/07 15:51:24 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const p1, Point const p2, Point const p3, Point const p)
{
	Fixed	a;
	Fixed	b;
	Fixed	c;
	Fixed	temp1(p.getX() - p3.getX());
	Fixed	temp2(p.getY() - p3.getY());
	Fixed	temp3(p1.getX() - p3.getX());
	Fixed	temp4(p1.getY() - p3.getY());
	Fixed	temp5(p2.getY() - p3.getY());
	Fixed	temp6(p3.getX() - p2.getX());
	
	a = (temp5 * temp1 + temp6 * temp2) / (temp5 * temp3 + temp6 * temp4);
	b = ((p3.getY() - p1.getY()) * temp1 + temp3 * temp2) / (temp5 * temp3 + temp6 * temp4);
	c = (float)1 - a.toFloat() - b.toFloat();
	if ((a.toFloat() > 0 && a.toFloat() < 1)
		&& (b.toFloat() > 0 && b.toFloat() < 1)
		&& (c.toFloat() > 0 && c.toFloat() < 1))
	{
		return (1);
	}
	return (0);
}