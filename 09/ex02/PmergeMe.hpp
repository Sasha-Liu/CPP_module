/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:38:09 by sasha             #+#    #+#             */
/*   Updated: 2023/05/13 20:27:56 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <algorithm>
# include <vector>
# include <list>

class PmergeMe
{
	public:
		PmergeMe(void);
		~PmergeMe(void);
		
		static void	sort_vec(std::vector<int> &vec);
		static void	sort_list(std::list<int> &lst);
	
	private:
		PmergeMe(PmergeMe const &pm);
		PmergeMe	&operator=(PmergeMe const &pm);
};


#endif