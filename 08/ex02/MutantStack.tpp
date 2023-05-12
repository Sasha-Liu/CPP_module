/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:54:05 by sasha             #+#    #+#             */
/*   Updated: 2023/05/12 11:39:22 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template<class T, class Container>
MutantStack<T, Container>::MutantStack(container_type const &ctnr):
	_stack(ctnr.begin(), ctnr.end()) {}

template<class T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack const &m):
	_stack(m._stack) {}
	
template<class T, class Container>
MutantStack<T, Container>::~MutantStack(void) {}

template<class T, class Container>
MutantStack<T, Container>	&MutantStack<T, Container>::operator=(MutantStack const &m)
{
	this->_stack = m._stack;
}

template<class T, class Container>
typename MutantStack<T, Container>::reference	MutantStack<T, Container>::top(void)
{
	return (this->_stack.back());
}

template<class T, class Container>
typename MutantStack<T, Container>::const_reference	MutantStack<T, Container>::top(void) const
{
	return (this->_stack.back());
}

template<class T, class Container>
bool	MutantStack<T, Container>::empty(void) const
{
	if (this->size() == 0)
		return (true);
	return (false);
}

template<class T, class Container>
typename MutantStack<T, Container>::size_type	MutantStack<T, Container>::size(void) const
{
	return (this->_stack.size());
}

template<class T, class Container>
void	MutantStack<T, Container>::push(const value_type &value)
{
	this->_stack.push_back(value);
}

template<class T, class Container>
void	MutantStack<T, Container>::pop(void)
{
	this->_stack.pop_back();
}

template<class T, class Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::begin(void) const
{
	return (this->_stack.begin());
}

template<class T, class Container>
typename MutantStack<T, Container>::iterator		MutantStack<T, Container>::begin(void)
{
	return (this->_stack.begin());
}

template<class T, class Container>
typename MutantStack<T, Container>::const_iterator	MutantStack<T, Container>::end(void) const
{
	return (this->_stack.end());
}

template<class T, class Container>
typename MutantStack<T, Container>::iterator		MutantStack<T, Container>::end(void)
{
	return (this->_stack.end());
}

#endif