/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:57:29 by inskim            #+#    #+#             */
/*   Updated: 2023/06/17 08:04:00 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber ,std::string secret)\
	: _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _secret(secret) {}

Contact::Contact(const Contact& other) \
	: _firstName(other._firstName), _lastName(other._lastName), _nickName(other._nickName), _phoneNumber(other._phoneNumber), _secret(other._secret) {}

std::string Contact::getFirstName(void) const{
	return (_firstName);	
}

std::string Contact::getLastName(void) const{
	return (_lastName);	
}

std::string Contact::getNickName(void) const{
	return (_nickName);	
}

std::string Contact::getPhoneNumber(void) const{
	return (_phoneNumber);	
}

std::string Contact::getSecret(void) const{
	return (_secret);	
}
