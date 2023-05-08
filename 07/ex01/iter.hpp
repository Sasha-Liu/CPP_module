/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:01:49 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/08 21:51:00 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

/*	function template	*/
template<typename T>
void	print(T t)
{
	std::cout << t << " ";
}

template<typename T>
void	iter(T *tab, size_t len, void f(T t))
{
	for (size_t i = 0; i < len; i++)
		f(tab[i]);
}

#endif