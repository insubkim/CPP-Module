/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/07 14:54:20 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* jj = new Cat();
	delete j;//should not create a leak
	delete jj;

	std::cout << "\n\n\n-------init-----\n\n" << std::endl;
	const Animal *zoo[10];
	std::cout << "\n\n\n-------new-----\n\n" << std::endl;
	for (int i = 0; i < 5; i++){
		zoo[i] = new Dog();
	}
	for (int i = 5; i < 10; i++){
		zoo[i] = new Cat();
	}
	std::cout << "\n\n\n-------makeSound-----\n\n" << std::endl;
	for (int i = 0; i < 10; i++){
		zoo[i]->makeSound();
	}
	std::cout << "\n\n\n-------delete-----\n\n" << std::endl;
	for (int i = 0; i < 10; i++){
		delete zoo[i];
	}
	return 0;
}