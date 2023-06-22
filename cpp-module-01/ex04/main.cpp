/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inskim <inskim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 05:12:43 by inskim            #+#    #+#             */
/*   Updated: 2023/06/22 12:05:54 by inskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
/*
eofbit	The function stopped extracting characters because the input sequence has no more characters available (end-of-file reached).
failbit	Either the function could not extract n characters or the construction of sentry failed.
badbit	Error on stream (such as when this function catches an exception thrown by an internal operation).
When set, the integrity of the stream may have been affected.

*/


int	main(int argc, char **argv){
	if (argc != 4)
		return (0);
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream i(argv[1]);
	std::ofstream o((std::string)argv[1] + ".replace");
	
	char buf[4096];
	std::string tmp;
	
	while (1){
		i.read(buf, 4096);
		if (i.fail() || i.bad()){
			std::cout << "read fail" << std::endl;
			return 0;
		}
		tmp.append(buf, i.gcount());
		if (i.eof() || i.gcount() < 4096)
			break ;
	}
	size_t loc = 0;
	while ((loc = tmp.find(s1, loc)) != -1){
		tmp.erase(loc, s1.size());
		tmp.insert(loc, s2);
	}
	o << tmp;
	return 0;
}