/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:00:09 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 19:50:33 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal() {
	_type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = other._type;
	this->brain = new Brain();
	*(this->brain) = *(other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other) {
		std::cout << "Dog copy assignation constructor called" << std::endl;
		this->_type = other._type;
		delete this->brain;
		this->brain = new Brain();
		*(this->brain) = *(other.brain);
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Dog: wan wan!" << std::endl;
}