/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/07/04 17:52:09 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a(2);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "======= compare test ======\n\n\n" << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;

    std::cout << "======= + - * / test ======\n\n\n" << std::endl;
    std::cout << (a + b) << std::endl;
    std::cout << (a - b) << std::endl;
    std::cout << (a * b) << std::endl;
    std::cout << (a / b) << std::endl;
    
    std::cout << "======= ++ -- test ======\n\n\n" << std::endl;
    Fixed c(0);
    
    std::cout << ++c << std::endl;
    std::cout << c++ << std::endl;
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    
    std::cout << "======= Min Max test ======\n\n\n" << std::endl;
    Fixed i = Fixed::min(a,c);
    std::cout << i << std::endl;
    Fixed j = Fixed::max(a,c);
    std::cout << j << std::endl;
    return 0;
}