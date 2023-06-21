/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:57:29 by inskim            #+#    #+#             */
/*   Updated: 2023/06/21 15:24:43 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber ,std::string secret)\
	: firstName(firstName), lastName(lastName), nickName(nickName), phoneNumber(phoneNumber), secret(secret) {}

Contact::Contact(const Contact& other) \
	: firstName(other.firstName), lastName(other.lastName), nickName(other.nickName), phoneNumber(other.phoneNumber), secret(other.secret) {}

std::string Contact::getFirstName(void) const{
	return (firstName);	
}

std::string Contact::getLastName(void) const{
	return (lastName);	
}

std::string Contact::getNickName(void) const{
	return (nickName);	
}

std::string Contact::getPhoneNumber(void) const{
	return (phoneNumber);	
}

std::string Contact::getSecret(void) const{
	return (secret);	
}
