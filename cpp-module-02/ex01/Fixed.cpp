/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/28 22:05:24 by inskim           ###   ########.fr       */
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
	double tmp = num;
	this->num = (int)num;
	tmp -= (int)num;
	for (int i = 0; i < 8; i++){
		this->num = this->num << 1;
		tmp *= 2;
		if (tmp >= 1){
			this->num += 1;
			tmp -= 1;
		}
	}
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
	float f = 0;
	int	_integer = toInt();
	f += _integer;
	int	_f = num & 0x000000FF;
	double tmp = 1;
	for (int n = 7; n >= 0; n--){
		tmp /= 2;
		f += ((_f & (1 << n)) ? 1 : 0) * tmp;
	}
	return f;
}
