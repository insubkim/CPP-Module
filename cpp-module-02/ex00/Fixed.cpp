/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/29 17:41:26 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0){
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other) : num(other.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator =(const Fixed &other){
	std::cout << "operator = called" << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return num;
}
void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}
