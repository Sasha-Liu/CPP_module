/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:35:35 by sasha             #+#    #+#             */
/*   Updated: 2023/04/24 21:24:50 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const num);
		Fixed(float const f);
		Fixed(Fixed const &fix);
		~Fixed(void);

		Fixed	&operator=(Fixed const &fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		bool	operator>(Fixed const &fix) const;
		bool	operator<(Fixed const &fix) const;
		bool	operator>=(Fixed const &fix) const;
		bool	operator<=(Fixed const &fix) const;
		bool	operator==(Fixed const &fix) const;
		bool	operator!=(Fixed const &fix) const;
		Fixed	operator+(Fixed const &fix) const;
		Fixed	operator-(Fixed const &fix) const;
		Fixed	operator*(Fixed const &fix) const;
		Fixed	operator/(Fixed const &fix) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static	Fixed		&min(Fixed &a, Fixed &b);
		static	Fixed const	&min(Fixed const &a, Fixed const &b);
		static	Fixed		&max(Fixed &a, Fixed &b);
		static	Fixed const	&max(Fixed const &a, Fixed const &b);
		
	private:
		int			_raw;
		static int	precision;	
};

std::ostream& operator<<(std::ostream &out, const Fixed &fix);

#endif