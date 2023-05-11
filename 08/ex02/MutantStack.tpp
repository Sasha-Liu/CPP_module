/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 20:54:05 by sasha             #+#    #+#             */
/*   Updated: 2023/05/11 21:59:16 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template<typename T>
MutantStack<T>::MutantStack(void): _stack() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &m): _stack(m._stack) {}

template<typename T>		
MutantStack<T>::~MutantStack(void) {}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &m)
{
	this->_stack = m._stack;
}

template<typename T>
typename MutantStack<T>::reference	MutantStack<T>::top(void)
{
	return (this->_stack.back());
}

template<typename T>
typename MutantStack<T>::const_reference	MutantStack<T>::top(void) const
{
	return (this->_stack.back());
}

template<typename T>
bool	MutantStack<T>::empty(void) const
{
	if (this->size() == 0)
		return (true);
	return (false);
}

template<typename T>
typename MutantStack<T>::size_type	MutantStack<T>::size(void) const
{
	return (this->_stack.size());
}

template<typename T>
void	MutantStack<T>::push(const value_type &value)
{
	this->_stack.push_back(value);
}

template<typename T>
void	MutantStack<T>::pop(void)
{
	this->_stack.pop_back();
}


#endif