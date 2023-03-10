/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:04:52 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 11:15:13 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

class Point
{
	public:
		Point(void);
		Point(float const x, float const y);
		Point(Point const &p);
		~Point(void);

		Point		&operator=(Point const &p);
		Fixed const	&getX(void) const;
		Fixed const	&getY(void) const;
		void		setX(Fixed const &fix);
		void		setY(Fixed const &fix);
	
	private:
		Fixed	x;
		Fixed	y;
};

std::ostream	&operator<<(std::ostream &out, Point const &p);

#endif