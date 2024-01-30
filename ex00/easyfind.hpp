/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:10:41 by aechafii          #+#    #+#             */
/*   Updated: 2024/01/30 13:37:31 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
#define EASY_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

class NotAvailable : public std::exception
{
	public :
    	virtual const char* what() const throw();
};

template <typename T>
void	easyfind(T& Contenaire, int toFind)
{
	typename T::iterator ptr = std::find(Contenaire.begin(), Contenaire.end(), toFind);
	if (ptr != Contenaire.end()){
		std::cout << "Peekaboo ...! I find You Mr : "<< *ptr << "=>"<< "You are in index : " << (ptr - Contenaire.begin()) << std::endl;
		return ;
	}
	else
		throw NotAvailable();
}

#endif