/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:24:50 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 17:28:41 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal") {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other) {
		std::cout << "WrongAnimal copy assignation constructor called" << std::endl;
		this->_type = other._type;
	}
	return *this;
}

std::string WrongAnimal::getType() const {
	return (_type);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal: ??????" << std::endl;
	return ;
}