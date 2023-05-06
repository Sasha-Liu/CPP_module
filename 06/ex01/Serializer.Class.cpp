/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.Class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:25:41 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 16:31:38 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.Class.hpp"

Serializer::Serializer(void) {}

Serializer::~Serializer(void) {}
		
std::uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}