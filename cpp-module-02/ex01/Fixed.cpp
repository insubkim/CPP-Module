/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/10 02:00:18 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0){
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const int num){
	std::cout << "Const int constructor called" << std::endl;
	this->num = num << fractionalBits;
}

Fixed::Fixed(const float num){
	std::cout << "Const float constructor called" << std::endl;
	this->num = roundf(num * (1 << fractionalBits));
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
	return toFloat();
}

float	Fixed::toFloat() const{
	return num / (float)(1 << fractionalBits);
}

std::ostream&	operator<<(std::ostream& o, const Fixed &f){
	std::cout << f.toFloat(); 
	return o;
}