/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:45:38 by sasha             #+#    #+#             */
/*   Updated: 2023/05/06 20:21:42 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP

class Base
{
	public:
		virtual ~Base(void) {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif