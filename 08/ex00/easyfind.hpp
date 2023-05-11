/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:47:35 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/11 13:35:05 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP 
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>

template<typename T>
typename T::const_iterator	easyfind(T const &t, int i)
{
	return (std::find(t.begin(), t.end(), i));
}

#endif