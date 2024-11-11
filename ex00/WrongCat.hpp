/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kawaharadaryou <kawaharadaryou@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:24:17 by kawaharadar       #+#    #+#             */
/*   Updated: 2024/11/11 17:31:14 by kawaharadar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		void makeSound() const;
};

#endif