/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:26:01 by sasha             #+#    #+#             */
/*   Updated: 2023/05/12 12:12:44 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>
# include <iostream>

template<class T, class Container = std::deque<T> >
class MutantStack
{
	public:
		/*	member type	*/
		typedef Container							container_type;
		typedef typename Container::value_type		value_type;
		typedef typename Container::size_type		size_type;
		typedef typename Container::difference_type	difference_type;
		typedef typename Container::reference		reference;
		typedef typename Container::const_reference	const_reference;
		typedef typename Container::iterator		iterator;
		typedef typename Container::const_iterator	const_iterator;

		/*	canonical form	*/
		explicit MutantStack<T, Container>(container_type const &ctnr = Container());
		MutantStack<T, Container>(MutantStack const &m);
		~MutantStack<T, Container>(void);
		MutantStack	&operator=(MutantStack const &m);

		/*	member func	*/
		reference		top(void);
		const_reference	top(void) const;
		bool			empty(void) const;
		size_type		size(void) const;
		void			push(const value_type &value);
		void			pop(void);
		const_iterator	begin(void) const;
		iterator		begin(void);
		const_iterator	end(void) const;
		iterator		end(void);

	protected:
		Container	_stack;
};

# include "MutantStack.tpp"

#endif