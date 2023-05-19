/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:25:11 by sasha             #+#    #+#             */
/*   Updated: 2023/05/16 21:53:31 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}

void	PmergeMe::sort_and_timed(std::vector<int> const &data)
{
	long	start;
	long	time1;
	long	time2;
	
	std::vector<int>	vec(data.begin(), data.end());
	std::list<int>		lst(data.begin(), data.end());
	start = get_time();
	merge_insert(vec);
	time1 = get_time() - start;
	start = get_time();
	merge_insert(lst);
	time2 = get_time() - start;
	std::cout << "Before: " << data << std::endl;
	std::cout << "After: " << vec << std::endl;
	std::cout << "Using vector: " << time1 << " ms" << std::endl;
	std::cout << "Using list: " << time2 << " ms" << std::endl;
}

long	PmergeMe::get_time(void)
{
	struct timeval	tv;
	long			cur_time;

	gettimeofday(&tv, NULL);
	cur_time = tv.tv_sec * 1000 + tv.tv_usec / 1000;
	return (cur_time);
}

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

