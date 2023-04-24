/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:35:37 by sasha             #+#    #+#             */
/*   Updated: 2023/04/24 21:33:14 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

int	Fixed::precision = 8;

Fixed::Fixed(void)
	:_raw(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called\n";
	this->_raw = num << Fixed::precision;
}


Fixed::Fixed(float const f)
{
	int	num;

	std::cout << "Float constructor called\n";
	num = (int)roundf(f * 256);
	this->_raw = num;
}


Fixed::Fixed(Fixed const &fix)
	:_raw(fix._raw)
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
	this->_raw = fix._raw;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_raw = raw;
}

float	Fixed::toFloat( void ) const
{
	float	ret;

	ret = (float)this->_raw / (float)256;
	return (ret);
}

int		Fixed::toInt(void) const
{
	float	num;
	
	num = (float)this->_raw / 256.0f;
	return ((int)roundf(num));
}

std::ostream& operator<<(std::ostream &out, Fixed const &fix)
{
	out << fix.toFloat();
	return (out);
}