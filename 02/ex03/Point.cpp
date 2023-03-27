/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:15:42 by sasha             #+#    #+#             */
/*   Updated: 2023/03/27 17:35:15 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) :x(0), y(0) {}

Point::Point(float const x, float const y) :x(x), y(y) {}

Point::Point(Point const &p) :x(p.getX()), y(p.getY()) {}

Point::~Point(void) {}

Point	&Point::operator=(Point const &p)
{
	this->setX(p.getX());
	this->setY(p.getY());
	return (*this);
}

Fixed const	&Point::getX(void) const
{
	return (this->x);
}

Fixed const	&Point::getY(void) const
{
	return (this->y);
}

void	Point::setX(Fixed const &fix)
{
	this->x = fix;
}

void	Point::setY(Fixed const &fix)
{
	this->y = fix;
}

std::ostream	&operator<<(std::ostream &out, Point const &p)
{
	out << "(" << p.getX() << ", " << p.getY() << ")";
	return (out);
}
