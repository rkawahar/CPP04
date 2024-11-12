/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:22:32 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/12 16:29:15 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("AAnimal") {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other) {
		std::cout << "AAnimal copy assignation constructor called" << std::endl;
		this->_type = other._type;
	}
	return *this;
}

std::string AAnimal::getType() const {
	return (_type);
}

void	AAnimal::makeSound( void ) const {
	std::cout << "AAnimal: ???" << std::endl;
	return ;
}