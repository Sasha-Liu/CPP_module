/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.Class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:20:12 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 20:49:47 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_CLASS_HPP
# define SERIALIZER_CLASS_HPP

/*
	ps: the uintptr_t is provided in C99 and C++11, not in C++98
		hence the <stdint.h> file instead of <sctdint>
*/

# include "Data.hpp"
# include <stdint.h>

class Serializer
{
	public:
		Serializer(void);
		~Serializer(void);
		
		static uintptr_t	serialize(Data* ptr);
		static Data			*deserialize(uintptr_t raw);

	private:	
		Serializer(Serializer const &x);
		Serializer	&operator=(Serializer const &x);
};

#endif