/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:59:01 by sasha             #+#    #+#             */
/*   Updated: 2023/03/13 14:40:00 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.Class.hpp"
#include "Brain.Class.hpp"
#include "Cat.Class.hpp"
#include "Dog.Class.hpp"


int	main(void)
{
	Animal	*animal[10];

	//Animal	unicorn;

	for (int i = 0; i < 5; i++)
	{
		animal[i] = new Cat();
		dynamic_cast<Cat*>(animal[i])->addIdea("There's a mice !");
	}
	for (int i = 5; i < 10; i++)
	{
		animal[i] = new Dog();
		dynamic_cast<Dog*>(animal[i])->addIdea("My human's home !");
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << animal[i]->getType() << ": ";
		animal[i]->makeSound();
		std::cout << *(dynamic_cast<Cat*>(animal[i])->getIdea(0)) << std::endl;
	}
	for (int i = 5; i < 10; i++)
	{
		std::cout << animal[i]->getType() << ": ";
		animal[i]->makeSound();
		std::cout << *(dynamic_cast<Dog*>(animal[i])->getIdea(0)) << std::endl;
	}

	for (int i = 0; i < 10; i++)
	{
		delete animal[i];
	}

	std::cout << "\n\n###   Test 2   ### \n\n";

	Cat	*kitten_1 = new Cat;
	
	kitten_1->addIdea("I want to knock over da mug");
	
	Cat *kitten_2 = new Cat(*kitten_1);
	
	std::cout << "kitten 1: " << *(kitten_1->getIdea(0)) << std::endl;
	std::cout << "kitten 2: " << *(kitten_2->getIdea(0)) << std::endl;
	
	delete kitten_1;

	std::cout << "kitten 1: deleted\n";
	std::cout << "kitten 2: " << *(kitten_2->getIdea(0)) << std::endl;

	delete kitten_2;

}