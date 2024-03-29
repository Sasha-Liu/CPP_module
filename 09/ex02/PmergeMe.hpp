/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:38:09 by sasha             #+#    #+#             */
/*   Updated: 2023/05/16 21:55:09 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <vector>
# include <list>
# include <iostream>
# include <ctime>
# include <sys/time.h>

class PmergeMe
{
	public:
		PmergeMe(void);
		~PmergeMe(void);
		
		static void	sort_and_timed(std::vector<int> const &data);
	
	private:
		template<class C>
		static void	merge_insert(C &data);
		
		template<class C>
		static void	merge(C &data, C &left, C &right);
		
		template<class C>
		static void	insert_sort(C &data);

		static long get_time(void);
		
		PmergeMe(PmergeMe const &pm);
		PmergeMe	&operator=(PmergeMe const &pm);
};

std::ostream	&operator<<(std::ostream &out, std::vector<int> vec);
std::ostream	&operator<<(std::ostream &out, std::list<int> lst);

template<class C>
void	PmergeMe::merge_insert(C &data)
{
	typename C::iterator	mid = data.begin();
	
	std::advance(mid, data.size() / 2);
	if (data.size() <= 10)
	{
		insert_sort(data);
		return ;
	}
	C	left(data.begin(), mid);
	C	right(mid, data.end());
	merge_insert(left);
	merge_insert(right);
	merge(data, left, right);
	return ;
}

template<class C>
void	PmergeMe::merge(C &data, C &left, C &right)
{
	data.clear();
	typename C::iterator	it_left = left.begin();
	typename C::iterator	it_right = right.begin();

	while (it_left != left.end() && it_right != right.end())
	{
		if (*it_left > *it_right)
		{
			data.push_back(*it_right);
			it_right++;
		}
		else
		{
			data.push_back(*it_left);
			it_left++;
		}
	}
	while (it_left != left.end())
	{
		data.push_back(*it_left);
		it_left++;
	}
	while (it_right != right.end())
	{
		data.push_back(*it_right);
		it_right++;
	}
}

template<class C>
void	PmergeMe::insert_sort(C &data)
{
	typename C::value_type	key;
	
	for (typename C::iterator i = data.begin(); i != data.end(); i++)
	{
		key = *i;
		for (typename C::iterator j = data.begin(); j != i; j++)
		{
			if (key < *j)
			{
				i = data.erase(i);
				i--;
				data.insert(j, key);
				break ;
			}
		}
	}
}

#endif