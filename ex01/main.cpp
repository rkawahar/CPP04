/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:21:27 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 20:00:11 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;

	const Animal* animal[10];
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