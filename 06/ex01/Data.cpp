/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:37:11 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 20:37:35 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std::ostream	&operator<<(std::ostream &out, Data const &data)
{
	out << "Data <" << data.data1 << ", " << data.data2
		<< ", " << data.data3 << ">" << std::endl;
	return (out);
}