/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:59:18 by abait-ta          #+#    #+#             */
/*   Updated: 2024/02/02 11:13:52 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main ()
{
    MutantStack<int> OBjon;

    OBjon.push(18);
    OBjon.push(9);
    OBjon.push(0);
    OBjon.push(8);
    OBjon.push(1);
    OBjon.push(2);
    OBjon.push(3);
    OBjon.push(4);
    OBjon.push(20);//^
    OBjon.push(19);//^
    OBjon.push(14);//^
    OBjon.push(13);//|
    {
        MutantStack<int>lol=OBjon;

        MutantStack<int>Tot;
        
        Tot=OBjon;
        
    }
    std::cout << "Top stack element      : " << OBjon.top()<< std::endl;
    std::cout << "Size => Before  POPING : " << OBjon.size()<< std::endl;
    OBjon.pop();
    std::cout << "Size => After   POPING : " << OBjon.size()<< std::endl;
    MutantStack<int>::iterator it= OBjon.begin();
    MutantStack<int>::iterator itend= OBjon.end();
    
    ++it;
    --it;
    while (it != itend)
    {
        std::cout << *it << " "<< std::endl;
        it++;
    }
    return (0);
}