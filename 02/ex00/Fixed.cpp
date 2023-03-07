/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:35:37 by sasha             #+#    #+#             */
/*   Updated: 2023/03/07 11:25:09 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	Fixed::precision = 8;

Fixed::Fixed(void)
	:raw(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &fix)
	:raw(fix.raw)
{
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Desstructor called\n";
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
