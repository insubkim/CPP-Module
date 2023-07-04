/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 18:27:40 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed& x, const Fixed& y) : x(x), y(y) {}

Point::Point(const Point& other) : x(other.getX()), y(other.getY()) {}

Point& Point::operator=(const Point& other){
	other.getX();
	return *this;
}

Point::~Point() {}

const Fixed& Point::getX() const{
	return x;
}

const Fixed& Point::getY() const{
	return y;
}