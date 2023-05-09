/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:46:58 by sasha             #+#    #+#             */
/*   Updated: 2023/05/09 11:09:13 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array(void): _size(10), _ptr(new T[10]) {}

template<typename T>
Array<T>::Array(unsigned int n): _size(n), _ptr(new T[n]) {}

template<typename T>
Array<T>::Array(Array const &tab): _size(tab._size)
{
	this->_ptr = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_ptr[i] = tab._ptr[i];
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] this->_ptr;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &tab)
{
	if (this == &tab)
	{
		return (*this);
	}
	this->_size = tab._size;
	delete [] this->_ptr;
	this->_ptr = new T[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_ptr[i] = tab._ptr[i];
}

template<typename T>
size_t	Array<T>::getSize(void) const
{
	return (this->_size);
}

template<typename T>
T		&Array<T>::operator[](size_t i)
{
	if (i >= this->_size)
		throw std::runtime_error("Array: out of bound");
	return (this->_ptr[i]);
}


template<typename T>
std::ostream	&operator<<(std::ostream &out, Array<T> const &tab)
{
	//code
	return (out);
}

#endif