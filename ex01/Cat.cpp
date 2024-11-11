/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:12:32 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 19:47:09 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal() {
	_type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = other._type;
	this->brain = new Brain();
	*(this->brain) = *(other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		std::cout << "Cat copy assignation constructor called" << std::endl;
		this->_type = other._type;
		delete this->brain;
		this->brain = new Brain();
		*(this->brain) = *(other.brain);
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat: ..." << std::endl;
}