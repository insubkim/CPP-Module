/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/06 12:03:49 by inskim           ###   ########.fr       */
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
	std::cout << "Const Float constructor called" << std::endl;
	this->num = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other) : num(other.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &other){
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
 
bool	Fixed::operator<(const Fixed &other) const{
	return num < other.num;	
}

bool	Fixed::operator<=(const Fixed &other) const{
	return num <= other.num;	
}

bool	Fixed::operator>(const Fixed &other) const{
	return num > other.num;	
}

bool	Fixed::operator>=(const Fixed &other) const{
	return num >= other.num;	
}

bool	Fixed::operator==(const Fixed &other) const{
	return num == other.num;	
}

bool	Fixed::operator!=(const Fixed &other) const{
	return num != other.num;	
}

Fixed Fixed::operator+(const Fixed &other) const{
	return Fixed(this->toFloat() + other.toFloat());	
}

Fixed Fixed::operator-(const Fixed &other) const{
	return Fixed(this->toFloat() - other.toFloat());	
}

Fixed Fixed::operator*(const Fixed &other) const{
	return Fixed(this->toFloat() * other.toFloat());	
}

Fixed Fixed::operator/(const Fixed &other) const{
	return Fixed(this->toFloat() / other.toFloat());	
}

Fixed	&Fixed::operator++(){
	num++;
	return *this;	
}

Fixed	Fixed::operator++(int){
	Fixed	tmp(*this);
	num++;
	return tmp;
}

Fixed	&Fixed::operator--(){
	num--;
	return *this;	
}

Fixed	Fixed::operator--(int){
	Fixed	tmp(*this);
	num--;
	return tmp;
}

Fixed&	Fixed::min(Fixed &a, Fixed &b){
	return a.getRawBits() < b.getRawBits() ? a : b;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b){
	return a.getRawBits() < b.getRawBits() ? b : a;
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b){
	return a.getRawBits() < b.getRawBits() ? a : b;
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b){
	return a.getRawBits() < b.getRawBits() ? b : a;
}

std::ostream&	operator<<(std::ostream& o, const Fixed &f){
	std::cout << f.toFloat(); 
	return o;
}
