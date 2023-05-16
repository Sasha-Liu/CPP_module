/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:25:11 by sasha             #+#    #+#             */
/*   Updated: 2023/05/16 16:57:45 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}


std::ostream	&operator<<(std::ostream &out, std::vector<int> vec)
{
	for (std::vector<int>::const_iterator i = vec.begin(); i != vec.end(); i++)
		out << *i << " ";
	out << std::endl;
	return (out);
}

std::ostream	&operator<<(std::ostream &out, std::list<int> lst)
{
	for (std::list<int>::const_iterator i = lst.begin(); i != lst.end(); i++)
		out << *i << " ";
	out << std::endl;
	return (out);
}

