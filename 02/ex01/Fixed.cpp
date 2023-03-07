/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:35:37 by sasha             #+#    #+#             */
/*   Updated: 2023/03/07 13:16:08 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

int	Fixed::precision = 8;

Fixed::Fixed(void)
	:raw(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called\n";
	this->raw = num << Fixed::precision;
}


Fixed::Fixed(float const f)
{
	int	num;

	std::cout << "Float constructor called\n";
	num = (int)roundf(f * 256);
	this->raw = num;
}


Fixed::Fixed(Fixed const &fix)
	:raw(fix.raw)
{
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::operator=(Fixed const &fix)
{
	std::cout << "Copy assignment operator called\n";
	this->raw = fix.raw;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->raw);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->raw = raw;
}

float	Fixed::toFloat( void ) const
{
	float	ret;

	ret = (float)this->raw / (float)256;
	return (ret);
}

int		Fixed::toInt(void) const
{
	return (this->raw >> Fixed::precision);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}