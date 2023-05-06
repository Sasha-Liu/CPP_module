/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:31:57 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 16:42:36 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.Class.hpp"
#include <iostream>

int	main(void)
{
	Serializer	s;
	uintptr_t	temp;
	Data		data;
	Data		*data_p;

	data.data1 = 10;
	data.data2 = -0.9;
	data.data3 = "hello";

	std::cout << "Data: <" << data.data1 << ", "
			<< data.data2 << ", " << data.data3 << ">" << std::endl;
	temp = s.serialize(&data);
	data_p = s.deserialize(temp);
	std::cout << "Data: <" << data_p->data1 << ", "
			<< data_p->data2 << ", " << data_p->data3 << ">" << std::endl;
}