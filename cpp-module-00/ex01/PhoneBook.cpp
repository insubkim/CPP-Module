/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/13 19:24:41 by inskim           ###   ########.fr       */
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

std::string	get_line(int f){
	if (f == FIRST_NAME){
		std::cout << "Put firstname" << std::endl;

	}else if (f == LAST_NAME){
		std::cout << "Put lastname" << std::endl;
		
	}else if (f == NICK_NAME){
		std::cout << "Put nickname" << std::endl;
		
	}else if (f == PHONE_NUMBER){
		std::cout << "Put phone number" << std::endl;
	}else{
		std::cout << "Put secret" << std::endl;
	}
	std::string s = "";
	while (s.empty()){
		std::getline(std::cin, s);
		if (std::cin.eof()){
			std::cout << "EOF is entered program exit" << std::endl;
			exit(0);
		}
	}
	return (s);
}

void	PhoneBook::add(){
	Contact c(get_line(FIRST_NAME), get_line(LAST_NAME), get_line(NICK_NAME), get_line(PHONE_NUMBER), get_line(SECRET));
	if (size == 8){
		this->c[front] = c;
		front++;
		rear++;
		if (rear == 8)
			rear = 0;
	}else{
		this->c[rear] = c;
		size++;
		rear++;
		if (rear == 8)
			rear = 0;
	}
}

void	PhoneBook::search(){
	if (size == 0){
		std::cout << "phone book is empty" << std::endl << std::endl;
		return ;
	}
	for (int i = 0; i < size; i++){
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << c[i].get_first_name().substr(0, 10) << "|" << std::setw(10) << c[i].get_last_name().substr(0, 10)<< "|" << std::setw(10) << c[i].get_nick_name().substr(0, 10) << std::endl;
	}
	int	i = -1;
	while (i == -1){
		std::cout << "enter index" << std::endl; 
		std::cin >> i;	
		if (std::cin.eof()){
				std::cout << "EOF is entered program exit" << std::endl;
				exit(0);
		}
		if (i < 0 || i >= size)
			i = -1;
	}
	std::cout << "first name : " << c[i].get_first_name() << std::endl;
	std::cout << "last name : " << c[i].get_last_name() << std::endl;
	std::cout << "nick name : " << c[i].get_nick_name() << std::endl;
	std::cout << "phone number : " << c[i].get_phone_number() << std::endl;
	std::cout << "secret : " << c[i].get_secret() << std::endl << std::endl;
}