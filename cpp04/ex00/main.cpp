/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adube <adube@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:45:40 by adube             #+#    #+#             */
/*   Updated: 2024/08/15 12:01:51 by adube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "Animal.hpp"
	#include "Cat.hpp"
	#include "Dog.hpp"
	#include "WrongAnimal.hpp"
	#include "WrongCat.hpp"


int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << i->getType() << " ";
	i->makeSound();
	std::cout << meta->getType() << " ";
	meta->makeSound();

	delete(meta);
	delete(j);
	delete(i);
	
	std::cout << std::endl;
	
	const Animal *meta2 = new Animal("Smol animal");
	const Dog *j2 = new Dog("Fido");
	const Cat *i2 = new Cat("Chacha");
	
	std::cout << j2->getType() << " ";
	j2->makeSound();
	std::cout << i2->getType() << " ";
	i2->makeSound();
	std::cout << meta2->getType() << " ";
	meta2->makeSound();

	delete(meta2);
	delete(j2);
	delete(i2);

	std::cout << std::endl;

	const WrongAnimal *meta3 = new WrongAnimal();
	const WrongCat *i3 = new WrongCat();
	
	std::cout << i3->getType() << " ";
	i3->makeSound();
	std::cout << meta3->getType() << " ";
	meta3->makeSound();

	delete(meta3);
	delete(i3);

	std::cout << std::endl;

	const WrongAnimal *meta4 = new WrongAnimal("Wrong Smol animal");
	const WrongAnimal *i4 = new WrongCat("Wrong Chacha");
	
	std::cout << i4->getType() << " ";
	i4->makeSound();
	std::cout << meta4->getType() << " ";
	meta4->makeSound();

	delete(meta4);
	delete(i4);
	
	return 0;
}
