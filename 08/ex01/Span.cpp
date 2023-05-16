/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:38:00 by hsliu             #+#    #+#             */
/*   Updated: 2023/05/16 15:13:17 by hsliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _size(n), _next(0), _tab(new int[n]) {}

Span::Span(Span const &span): 
	_size(span._size), _next(span._next), _tab(new int[_size])
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_tab[i] = span._tab[i];
}

Span::~Span(void)
{
	delete [] _tab;
}

Span	&Span::operator=(Span const &span)
{
	if (this == &span)
		return (*this);
	delete [] this->_tab;
	this->_size = span._size;
	this->_next = span._next;
	this->_tab = new int[this->_size];
	for (unsigned int i = 0; i < this->_next; i++)
		this->_tab[i] = span._tab[i];
	return (*this);
}

unsigned int	Span::getSize(void) const
{
	return (this->_size);	
}

unsigned int	Span::getNext(void) const
{
	return (this->_next);
}

/*	read only	*/
int	const	&Span::operator[](unsigned int i) const
{
	if (i >= this->_size)
	{
		throw std::runtime_error("Span: Array out of Bound");
	}
	if (i >= this->_next)
	{
		throw std::runtime_error("Span: read uninitilaized value");
	}
	return (this->_tab[i]);
}

void	Span::addNumber(int n)
{
	if (this->_next >= this->_size)
	{
		throw std::runtime_error("Span: addNumber: Span is Full");
	}
	this->_tab[_next] = n;
	this->_next++;
}

int		Span::shortestSpan(void) const
{
	Span	copy(this->_tab, this->_tab + this->_next);
	int		min;
	int		temp;
	
	if (this->_next <= 1)
	{
		throw std::runtime_error("Span: longestSpan: not enough element");
	}
	std::sort(copy._tab, copy._tab + copy._size);
	min = copy[1] - copy[0];
	for (unsigned int i = 2; i < copy._size; i++)
	{
		temp = copy[i] - copy[i - 1];
		if (temp < min)
			min = temp;
	}
	return (min);
}

int		Span::longestSpan(void) const
{
	Span	copy(this->_tab, this->_tab + this->_next);
	
	if (this->_next <= 1)
	{
		throw std::runtime_error("Span: longestSpan: not enough element");
	}
	std::sort(copy._tab, copy._tab + copy._size);
	return (copy[copy._size - 1] - copy[0]);
}

	
std::ostream		&operator<<(std::ostream &out, Span const &span)
{
	if (span.getNext() == 0)
	{
		out << "empty" << std::endl;
		return (out);
	}
	for (unsigned int i = 0; i < span.getNext(); i++)
		out << span[i] << " ";
	out << std::endl;
	return (out);
}

