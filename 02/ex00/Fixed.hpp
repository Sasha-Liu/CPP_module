/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:35:35 by sasha             #+#    #+#             */
/*   Updated: 2023/03/07 11:25:13 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &fix);
		~Fixed(void);

		Fixed	&operator=(Fixed const &fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private:
		int			raw;
		static int	precision;	
};

#endif