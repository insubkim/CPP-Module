/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/05/20 05:28:07 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	for (int i = 0; i < 8; i++){
		c[i] = 0;
	}
	last = -1;
}

void	PhoneBook::add_contact(Contact::Contact contact){
	if (last = -1)
		last = 0;
	for (int i = 0; i < 8; i++){
		if (!c[i]){
			c[i] = contact;
		}
	}
}

void	PhoneBook::display_contact(int index){
	c[i].display();
}

int	PhoneBook::display_list(void){
	if (last == -1){
		std::cout << "PhoneBook is empty" << endl;
		return (0);
	}
	for(int i = 0; i < 8; i++){
		if (!c[i]){
			break ;
		}
		c[i].display_name();
	}
	return (1);
}