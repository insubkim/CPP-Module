/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 23:14:41 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#include "Point.hpp"

bool bsp(Point const v1, Point const v2, Point const v3, Point const point){

    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = (point.getX().toFloat() - v2.getX().toFloat()) * (v1.getY().toFloat() - v2.getY().toFloat()) - (v1.getX().toFloat() - v2.getX().toFloat()) * (point.getY().toFloat() - v2.getY().toFloat());
    if (!d1)
	  	return true;
  	d2 = (point.getX().toFloat() - v3.getX().toFloat()) * (v2.getY().toFloat() - v3.getY().toFloat()) - (v2.getX().toFloat() - v3.getX().toFloat()) * (point.getY().toFloat() - v3.getY().toFloat());
    if (!d2)
	  	return true;
  	d3 = (point.getX().toFloat() - v1.getX().toFloat()) * (v3.getY().toFloat() - v1.getY().toFloat()) - (v3.getX().toFloat() - v1.getX().toFloat()) * (point.getY().toFloat() - v1.getY().toFloat());
    if (!d3)
	  	return true;
  	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
    return !(has_neg && has_pos);
}