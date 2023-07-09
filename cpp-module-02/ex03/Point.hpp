
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 17:51:16 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
public :
	Point();
	Point(const Fixed& x, const Fixed& y);
	Point(const Point& other);
	~Point();
	const Fixed& getX() const;
	const Fixed& getY() const;
private :
	const Fixed x;
	const Fixed y;
	Point& operator=(const Point& other);
};

#endif