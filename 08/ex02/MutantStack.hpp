/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:26:01 by sasha             #+#    #+#             */
/*   Updated: 2023/05/11 21:56:30 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <deque>

template<typename T>
class MutantStack
{
	public:
				
		/*	canonical form	*/
		MutantStack<T>(void);
		MutantStack<T>(MutantStack const &m);
		~MutantStack<T>(void);
		MutantStack	&operator=(MutantStack const &m);

		/*	member type	*/
		typedef typename std::deque<T>					container_type;
		typedef typename std::deque<T>::value_type		value_type;
		typedef typename std::deque<T>::size_type		size_type;
		typedef typename std::deque<T>::reference		reference;
		typedef typename std::deque<T>::const_reference	const_reference;

		/*	member func	*/
		reference		top(void);
		const_reference	top(void) const;
		bool			empty(void) const;
		size_type		size(void) const;
		void			push(const value_type &value);
		void			pop(void);
		
		/*	ctor and dtor : to be added	*/
		
		/*	non-member function	*/
		// operator==
		// operator!=
		// operator<
		// operator<=
		// operator>
		// operator>=

	protected:
		std::deque<T>	_stack;
};

# include "MutantStack.tpp"

#endif