/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:39:31 by sasha             #+#    #+#             */
/*   Updated: 2023/05/09 11:32:02 by hsliu            ###   ########.fr       */
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

		size_t	getSize(void) const;
		T		&operator[](size_t i);
		T const	&operator[](size_t i) const;

	private:
		size_t const	_size;
		T				*_ptr;
		
		Array	&operator=(Array const &tab);
};

template<typename T>
std::ostream	&operator<<(std::ostream &out, Array<T> const &tab); 

# include "Array.tpp"

#endif