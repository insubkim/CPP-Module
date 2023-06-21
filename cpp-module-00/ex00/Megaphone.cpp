/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:39:56 by inskim            #+#    #+#             */
/*   Updated: 2023/06/21 18:41:31 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

class Upper
{
private:
	const std::string	upperString;
	const std::string convertToUpper(std::string original);
	
public:
	Upper(std::string originalString);
	std::string getUpperString() const;
};

const std::string Upper::convertToUpper(std::string original){
		for (int i = 0; i < (int)original.size(); i++){
			original[i] = toupper(original[i]);
		}
		return original;
}

Upper::Upper(std::string originalString) : upperString(convertToUpper(originalString)){}

std::string Upper::getUpperString() const{
	return upperString;
}

std::ostream& operator <<(std::ostream &o, const Upper& u){
	o << u.getUpperString();
	return o;
}

int	main(int argc, char *argv[])
{
	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else{
		for (int i = 1; i < argc; i++){
			Upper u(argv[i]);
			std::cout << u;
		}
		std::cout << std::endl;
	}
	return (0);
}