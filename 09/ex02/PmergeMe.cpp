/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:25:11 by sasha             #+#    #+#             */
/*   Updated: 2023/05/15 10:19:11 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}

/*
	merge-insert sort:
		devide the input into two vector
		[a1 a2 a3 a4 a5 ...] [b1 b2 b3 b4 b5 ... b]
		where ai > bi, and a are sorted

		rearrange b:
			group the bs according to jacobsthan number
			1 3 5 11 21 43, and reverse the order
			[b1] [b3 b2] [b5 b4] [b11 b10 ... b6] [b21 .. b12]
		insert bi into [... ai) using bineray search 
*/
void	PmergeMe::sort_vec(std::vector<int> &vec)
{
	
}