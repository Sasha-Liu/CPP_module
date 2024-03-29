/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:23:06 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/06 20:37:00 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP 

# include <string>
# include <iostream>

struct Data
{
	int			data1;
	double		data2;
	std::string	data3;
};

std::ostream	&operator<<(std::ostream &out, Data const &data);

#endif