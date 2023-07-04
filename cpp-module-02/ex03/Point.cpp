/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 23:17:46 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {
	std::cout << "Point Default constructor called" << std::endl;
}

Point::Point(const Fixed& x, const Fixed& y) : x(x), y(y) {
	std::cout << "Point (Fixed x, Fixed y) constructor called" << std::endl;
}

Point::Point(const Point& other) : x(other.getX()), y(other.getY()) {
	std::cout << "Point Point constructor called" << std::endl;
}

Point& Point::operator=(const Point& other){
	other.getX();
	return *this;
}

Point::~Point() {
	std::cout << "Point Destructor called" << std::endl;
}

const Fixed& Point::getX() const{
	return x;
}

const Fixed& Point::getY() const{
	return y;
}