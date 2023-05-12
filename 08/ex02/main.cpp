/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:52:53 by sasha             #+#    #+#             */
/*   Updated: 2023/05/12 14:08:23 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <vector>

int main()
{
	/*	test in project	*/
	std::cout << "#   test in project: mutant stack" << std::endl;
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
	std::cout << "\n#   test in project: list" << std::endl;
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
	std::cout << "\n#   Other test" << std::endl;
	{
		std::deque<int>	my_deque;
		my_deque.push_back(1);
		my_deque.push_back(2);
		my_deque.push_back(3);
		
		std::list<std::string> my_list;
		my_list.push_back("hello");
		my_list.push_back("coucou");

		std::vector<double>	my_vector;
		my_vector.push_back(1.111);
		my_vector.push_back(2.222);
		
		/*	all ctor test and operator=	*/
		MutantStack<int>							stack1;
		MutantStack<int>							stack2(my_deque);
		MutantStack<int, std::list<std::string> >	stack3(my_list);
		MutantStack<int, std::vector<double> >		stack4(my_vector);
		MutantStack<int>							stack5(stack2);
		
		stack1 = stack2;
		std::cout << "#   stack1: " << stack1 << "stack2: " << stack2
				<< "stack3: " << stack3 << "stack4: " << stack4
				<< "stack5: " << stack5;
		std::cout << "stack 1 2 5 should be the same" << std::endl;
		
		/*	member function	*/
		std::cout << "\n#   member function test stack1: " << std::endl;
		std::cout << "top: " << stack1.top() << std::endl;
		std::cout << "size: " << stack1.size() << std::endl;
		std::cout << "max_size: " << stack1.max_size() << std::endl;
		std::cout << "empty: " << stack1.empty() << std::endl;
		std::cout << "before pop: " << stack1;
		stack1.pop();
		std::cout << "after pop: " << stack1;
	}
}
