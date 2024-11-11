/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:22:32 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 17:17:41 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		std::cout << "Animal copy assignation constructor called" << std::endl;
		this->_type = other._type;
	}
	return *this;
}

std::string Animal::getType() const {
	return (_type);
}

void	Animal::makeSound( void ) const {
	std::cout << "Animal: ???" << std::endl;
	return ;
}