/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:01:17 by inskim            #+#    #+#             */
/*   Updated: 2023/06/21 17:58:24 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact{
private :
	const std::string	firstName;
	const std::string	lastName;
	const std::string	nickName;
	const std::string	phoneNumber;
	const std::string	secret;
public :
	Contact();
	Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber,std::string secret);
	Contact(const Contact& other);
	std::string	getFirstName(void) const;
	std::string getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getSecret(void) const;
};

#endif