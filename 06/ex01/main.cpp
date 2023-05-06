/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:31:57 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 20:31:05 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.Class.hpp"
#include <iostream>

int	main(void)
{
	Serializer	s;
	Data		data;
	Data		*data_p;

	data.data1 = 10;
	data.data2 = -0.9;
	data.data3 = "hello";

	std::cout << data;
	data_p = s.deserialize(s.serialize(&data));
	std::cout << data;
	std::cout << *data_p;
}