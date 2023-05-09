/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:39:31 by sasha             #+#    #+#             */
/*   Updated: 2023/05/09 11:08:41 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
# include <iostream>

template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &tab);
		~Array(void);
		Array	&operator=(Array const &tab);

		size_t	getSize(void) const;
		T		&operator[](size_t i);

	private:
		T				*_ptr;
		size_t const	_size;
};

template<typename T>
std::ostream	&operator<<(std::ostream &out, Array<T> const &tab); 

# include "Array.tpp"

#endif