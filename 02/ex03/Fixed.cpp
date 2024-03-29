/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:35:37 by sasha             #+#    #+#             */
/*   Updated: 2023/04/24 21:31:46 by sasha            ###   ########.fr       */
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

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}

bool	Fixed::operator>(Fixed const &fix) const
{
	if (this->_raw > fix._raw)
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed const &fix) const
{
	if (this->_raw < fix._raw)
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed const &fix) const
{
	if (this->_raw >= fix._raw)
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed const &fix) const
{
	if (this->_raw <= fix._raw)
		return (1);
	return (0);
}

bool	Fixed::operator==(Fixed const &fix) const
{
	if (this->_raw == fix._raw)
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed const &fix) const
{
	if (this->_raw != fix._raw)
		return (1);
	return (0);
}

Fixed	Fixed::operator+(Fixed const &fix) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() + fix.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &fix) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() - fix.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const &fix) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() * fix.getRawBits());
	ret.setRawBits(ret.getRawBits() >> Fixed::precision);
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &fix) const
{
	float	f;
	Fixed	ret;

	f = this->toFloat() / fix.toFloat();
	ret.setRawBits((int)roundf(f * 256));
	return (ret);
}

Fixed	&Fixed::operator++(void)
{
	(this->_raw)++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed copy(*this);

	(this->_raw)++;
	return (copy);
}

Fixed	&Fixed::operator--(void)
{
	(this->_raw)--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed copy(*this);

	(this->_raw)--;
	return (copy);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	return (b);
}
