/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/21 18:04:08 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip> 
#include <limits>


static	bool	isDecimal(const std::string s){
	for (int i = 0; i < (int)s.size(); i++){
		if (!isdigit(s[i]))
			return false;
	}
	return true;
}

PhoneBook::PhoneBook(){
	for (int i = 0; i < PHONEBOOK_SIZE; i++){
		c[i] = nullptr;
	}
	front = 0;
	rear = 0;
	size = 0;
}

PhoneBook::~PhoneBook(){
	for (int i = 0; i < size; i++){
		if (c[i] != nullptr)
			delete(c[i]);
	}
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
		std::cout << std::setw(10) << c[i]->getFirstName().substr(0, 9) + (c[i]->getFirstName().size() >= 10 ? "." : "") << "|";
		std::cout << std::setw(10) << c[i]->getLastName().substr(0, 9) + (c[i]->getLastName().size() >= 10 ? "." : "") << "|";
		std::cout << std::setw(10) << c[i]->getNickName().substr(0, 9) + (c[i]->getNickName().size() >= 10 ? "." : "") << std::endl;
	}
	int	i = -1;
	std::string input;
	while (i == -1){
		std::cout << "enter index" << std::endl; 
		std::cin >> input;	
		if (std::cin.eof()){
			std::cout << "EOF is entered program exit" << std::endl;
			exit(0);
		}else if (std::cin.fail()){
			std::cout << "cin fail program exit" << std::endl;
			exit(0);
		}
		if (isDecimal(input)){
			i = stoi(input);
			if (i < 0 || i >= size)
				i = -1;
		}
	}
	std::cout << "first name : " << c[i]->getFirstName() << std::endl;
	std::cout << "last name : " << c[i]->getLastName() << std::endl;
	std::cout << "nick name : " << c[i]->getNickName() << std::endl;
	std::cout << "phone number : " << c[i]->getPhoneNumber() << std::endl;
	std::cout << "secret : " << c[i]->getSecret() << '\n' << std::endl;
}