/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:59:01 by sasha             #+#    #+#             */
/*   Updated: 2023/03/10 12:41:35 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Class.hpp"
#include "Cat.Class.hpp"
#include "Dog.Class.hpp"
#include "WrongAnimal.Class.hpp"
#include "WrongCat.Class.hpp"

int	main(void)
{
	const Animal	*p1 = new Animal;
	const Animal	*p2 = new Cat;
	const Animal	*p3 = new Dog;
	Animal			animal;

	
	std::cout << "\nUsing Animal pointer with derived class:\n";
	
	std::cout << p1->getType() << ": ";
	p1->makeSound();
	std::cout << p2->getType() << ": ";
	p2->makeSound();
	std::cout << p3->getType() << ": ";
	p3->makeSound();

	std::cout << "\nAssigning derived class object to animal object:\n";

	animal = *p1;
	std::cout << animal.getType() << ": ";
	animal.makeSound();

	animal = *p2;
	std::cout << animal.getType() << ": ";
	animal.makeSound();

	animal = *p3;
	std::cout << animal.getType() << ": ";
	animal.makeSound();

	std::cout << std::endl;
	
	delete p1;
	delete p2;
	delete p3;

	std::cout << "\nWrong animal test begins\n" <<std::endl;

	WrongAnimal	*p5 = new WrongAnimal;
	WrongAnimal	*p6 = new WrongCat;

	std::cout << "\nUsing WrongAnimal pointer with derived class:\n";
	
	std::cout << p5->getType() << ": ";
	p5->makeSound();
	std::cout << p6->getType() << ": ";
	p6->makeSound();

	delete p5;
	delete p6;
}