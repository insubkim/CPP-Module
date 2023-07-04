/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 23:15:30 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : num(0){
	std::cout << "Fixed Default constructor called" << std::endl;
}


Fixed::Fixed(const int num){
	std::cout << "Fixed Const int constructor called" << std::endl;
	this->num = num << fractionalBits;
}

Fixed::Fixed(const float num){
	std::cout << "Fixed Const Float constructor called" << std::endl;
	this->num = roundf(num * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &other) : num(other.getRawBits()){
	std::cout << "Fixed Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &other){
	setRawBits(other.getRawBits());
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Fixed Destructor called" << std::endl;
}

int		Fixed::getRawBits() const{
	return num;
}
void	Fixed::setRawBits(int const raw){
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

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b){
	return a.num < b.num ? a : b;
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b){
	return a.num < b.num ? b : a;
}

std::ostream&	operator<<(std::ostream& o, const Fixed &f){
	std::cout << f.toFloat(); 
	return o;
}
