/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasha <sasha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:20:00 by sasha             #+#    #+#             */
/*   Updated: 2023/03/30 12:17:45 by sasha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.Class.hpp"
#include "Cure.Class.hpp"
#include "Ice.Class.hpp"
#include "Character.Class.hpp"
#include "MateriaSource.Class.hpp"


int main()
{
	/*	test given by the project	*/
	{
		IMateriaSource* src = new MateriaSource();
	
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
	
		ICharacter* me = new Character("me");
		AMateria* tmp;
	
		tmp = src->createMateria("ice");
		me->equip(tmp);
	
		tmp = src->createMateria("cure");
		me->equip(tmp);
	
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
	
		delete bob;
		delete me;
		delete src;
	}
	/*	more test	*/
	{
		AMateria		*ice = new Ice();
		AMateria		*cure = new Cure();
		ICharacter		*jack = new Character("Jack");
		ICharacter		*jill = new Character("Jill");

		jack->equip(cure);
		jill->equip(ice);
		jack->use(0, *jill);
		jill->use(0, *jack);
		jack->unequip(0);
		jill->unequip(0);
		jack->use(0, *jill);
		jill->use(0, *jack);
		
		delete ice;
		delete cure;
		delete jack;
		delete jill;
	}

	/*	more test 2	*/
	{
		AMateria	*ice0 = new Ice();
		AMateria	*ice1 = new Ice();
		AMateria	*ice2 = new Ice();
		AMateria	*ice3 = new Ice();
		AMateria	*ice4 = new Ice();
		ICharacter	*jon = new Character("Jon");
		ICharacter	*victim = new Character("Victim");

		jon->use(0, *victim);
		jon->use(1, *victim);
		jon->use(2, *victim);
		jon->use(3, *victim);
		jon->use(4, *victim);
		
		jon->equip(ice0);
		jon->equip(ice1);
		jon->equip(ice2);
		jon->equip(ice3);
		jon->equip(ice4);
		
		jon->use(0, *victim);
		jon->use(1, *victim);
		jon->use(2, *victim);
		jon->use(3, *victim);
		jon->use(4, *victim);

		delete jon;
		delete victim;
		delete ice4;
	}
	
	return 0;
}
