/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:57:29 by inskim            #+#    #+#             */
/*   Updated: 2023/05/13 16:42:13 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name, std::string phone_number ,std::string secret){
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->phone_number = phone_number;
	this->secret = secret;
}

Contact::Contact(const Contact& other){
	first_name = other.first_name;
	last_name = other.last_name;
	nick_name = other.nick_name;
	phone_number = other.phone_number;
	secret = other.secret;
}

std::string Contact::get_first_name(void){
	return (this->first_name);	
}

std::string Contact::get_last_name(void){
	return (this->last_name);	
}

std::string Contact::get_nick_name(void){
	return (this->nick_name);	
}

std::string Contact::get_phone_number(void){
	return (this->phone_number);	
}

std::string Contact::get_secret(void){
	return (this->secret);	
}