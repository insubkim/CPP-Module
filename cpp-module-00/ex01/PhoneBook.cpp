/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/13 17:36:32 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
		std::cin >> s;
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
	
}