/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:57:29 by inskim            #+#    #+#             */
/*   Updated: 2023/05/13 09:03:00 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name, std::string secret){
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->secret = secret;
}

Contact::Contact(const Contact& other){
	first_name = other.first_name;
	last_name = other.last_name;
	nick_name = other.nick_name;
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

std::string Contact::get_secret(void){
	return (this->secret);	
}