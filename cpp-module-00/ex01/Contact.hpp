/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:01:17 by inskim            #+#    #+#             */
/*   Updated: 2023/06/13 16:33:50 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class	Contact{
private :
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	secret;
public :
	Contact();
	Contact(std::string first_name, std::string last_name, std::string nick_name, std::string phone_number,std::string secret);
	Contact(const Contact& other);
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nick_name(void);
	std::string	get_phone_number(void);
	std::string	get_secret(void);
};

#endif