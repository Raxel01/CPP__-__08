/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:07:21 by aechafii          #+#    #+#             */
/*   Updated: 2024/01/30 12:59:38 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char* NotAvailable::what() const throw()
{
	return ("This elem Does Not exist in Contenaire");
}
class Finder
{
	public :
		int elem;
	public :
			Finder(int assign) { elem = assign;};
			
			int getter() const {return elem;};
			
			bool operator==(const Finder& OldOBj){
    			return (this->elem == OldOBj.elem);
		}
};

std::ostream& operator <<(std::ostream& out, const Finder& obj)
{
	std::cout << obj.getter() << std::endl;
	
	return out;
}

int main ()
{

	try{
		std::vector<int> v;
		std::vector<Finder>FinderObj;
		// std::d÷
		
		for (int i = 0; i < 5; i++){
			FinderObj.push_back(Finder(i * 9));
		}
		for (int i =0; i <10; i++){
			v.push_back(i);
	}
	try{
			::easyfind(v, 900); 
		} catch(const std::exception& e){
			
			std::cerr << e.what() << std::endl;
	}
		::easyfind(FinderObj, 9);
	}
	catch(std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}