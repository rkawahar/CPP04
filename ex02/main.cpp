/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:21:27 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 16:30:38 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;

	const AAnimal* animal[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5) {
			animal[i] = new Dog();
		}
		else {
			animal[i] = new Cat();
		}
	}
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++) {
		delete animal[i];
	}
}