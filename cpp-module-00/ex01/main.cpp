/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insub <insub@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 03:07:34 by inskim            #+#    #+#             */
/*   Updated: 2023/05/13 16:32:52 by insub            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void	hi(Contact c){

	std::cout << "new\n" << c.get_first_name() << c.get_last_name() << c.get_nick_name() << c.get_secret() << std::endl;
}

int	main(int argc, char **argv){
	Contact c("kim", "insub", "inskim", "fuck");
	std::cout << c.get_first_name() << c.get_last_name() << c.get_nick_name() << c.get_secret() << std::endl;
	hi(c);
	system("leaks a.out");
	return (0);
}