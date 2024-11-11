/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:21:27 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 17:35:34 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete dog;
	delete cat;
	std::cout << std::endl;
	
	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();
	std::cout << std::endl;
	
	std::cout << w_meta->getType() << std::endl;
	std::cout << w_cat->getType() << std::endl;
	std::cout << std::endl;
	w_meta->makeSound();
	w_cat->makeSound();
	std::cout << std::endl;
	delete w_meta;
	delete w_cat;
}