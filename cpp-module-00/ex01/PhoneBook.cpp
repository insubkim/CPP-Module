/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/17 08:08:58 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip> 
#include <limits>

PhoneBook::PhoneBook(void){
	front = 0;
	rear = 0;
	size = 0;
}

void	PhoneBook::add(){
	if (size == PHONEBOOK_SIZE){
		c[front] = new Contact(get_line(FIRST_NAME), get_line(LAST_NAME), get_line(NICK_NAME), get_line(PHONE_NUMBER), get_line(SECRET));
		front++;
		rear++;
		if (rear ==  PHONEBOOK_SIZE)
			rear = 0;
	}else{
		c[rear] = new Contact(get_line(FIRST_NAME), get_line(LAST_NAME), get_line(NICK_NAME), get_line(PHONE_NUMBER), get_line(SECRET));
		size++;
		rear++;
	}
}

void	PhoneBook::search() const{
	if (size == 0){
		std::cout << "phone book is empty\n" << std::endl;
		return ;
	}
	for (int i = 0; i < size; i++){
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << c[i].get_first_name().substr(0, 9) << (c[i].get_first_name().size() > 10 ? "." : "") << "|";
		std::cout << std::setw(10) << c[i].get_last_name().substr(0, 9) << (c[i].get_last_name().size() > 10 ? "." : "") << "|";
		std::cout << std::setw(10) << c[i].get_nick_name().substr(0, 9) << (c[i].get_nick_name().size() > 10 ? "." : "") << std::endl;
	}
	int	i = -1;
	while (i == -1){
		std::cout << "enter index" << std::endl; 
		std::cin >> i;	
		if (std::cin.eof()){
			std::cout << "EOF is entered program exit" << std::endl;
			exit(0);
		}else if (std::cin.fail()){
			std::cout << "cin fail program exit" << std::endl;
			exit(0);
		}
		if (i < 0 || i >= size)
			i = -1;
	}
	std::cout << "first name : " << c[i].get_first_name() << std::endl;
	std::cout << "last name : " << c[i].get_last_name() << std::endl;
	std::cout << "nick name : " << c[i].get_nick_name() << std::endl;
	std::cout << "phone number : " << c[i].get_phone_number() << std::endl;
	std::cout << "secret : " << c[i].get_secret() << '\n' << std::endl;
}