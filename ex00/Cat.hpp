/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:12:29 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 16:59:23 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		void makeSound() const;
};

#endif