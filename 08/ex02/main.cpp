/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:52:53 by sasha             #+#    #+#             */
/*   Updated: 2023/05/12 13:51:52 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <stack>
#include <vector>

int main()
{
	/*	test in project	*/
	std::cout << "test in project: mutant stack" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		// std::stack<int> s(mstack);
		std::stack<int, MutantStack<int> > s(mstack);
	}
	/*	test in project	*/
	std::cout << "test in project: list" << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << mlist.size() << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		// std::stack<int> s(mlist);
		std::stack<int, std::list<int> > s(mlist);
	}
	/*	other test	*/
	std::cout << "Other test" << std::endl;
	{
		std::deque<int>	my_deque;
		my_deque.push_back(1);
		my_deque.push_back(2);
		my_deque.push_back(3);
		
		std::list<int> my_list;
		my_list.push_back(5);
		my_list.push_back(10);

		std::vector<double>	my_vector;
		my_vector.push_back(3);
		my_vector.push_back(4);
		
		/*	all ctor	*/
		MutantStack<int>					stack1;
		MutantStack<int>					stack2(my_deque);
		MutantStack<int, std::list<int> >	stack3(my_list);
		MutantStack<int, std::vector<double> >	stack4(my_vector);
		
		std::cout << "stack1: " << stack1 << std::endl;
		std::cout << "stack2: " << stack2 << std::endl;
		std::cout << "stack3: " << stack3 << std::endl;
		std::cout << "stack4: " << stack4 << std::endl;
		
	}
}
