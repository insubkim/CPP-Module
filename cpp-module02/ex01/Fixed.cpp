/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/03 22:44:56 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0){
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const int num){
	this->num = num << 8;
}

Fixed::Fixed(const float num){
	this->num = num * (1 << 8);
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

int		Fixed::toInt() const{
	return num >> 8;
}

float	Fixed::toFloat() const{
	return num / (float)(1 << 8);
}

std::ostream&	operator<<(std::ostream& o, const Fixed &f){
	std::cout << f.toFloat(); 
	return o;
}