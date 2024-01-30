/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:49:51 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/30 18:20:55 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char* Badinstanciation::what() const throw(){
    return (" No Parametres to instanciate Span Class ");
}


const char* NoAvailableSpace::what() const throw(){
    return (" No Space Left on Vector Holder : ");
}

Span::~Span(){
    
}

Span::Span(){
    throw Badinstanciation();
}

Span::Span(size_t AssignMax) : _MAXMEMBER(AssignMax){
    this->Holder.resize(AssignMax);
    FulledMember = 0;
}

void    Span::addNumber(int NumberToAdd){
    if (FulledMember < _MAXMEMBER){
        Holder.insert( Holder.begin() + FulledMember, NumberToAdd);
        FulledMember++;
        Holder.resize(_MAXMEMBER);
    }
    else
        throw NoAvailableSpace();
}

void    Span::getClassData() {
    std::cout << "Numbers In mY Vector : " << this->FulledMember << std::endl;
    std::cout << "My Vector Holder size: " << this->_MAXMEMBER <<std::endl;
    std::cout << "Reverify size Holder : "<< Holder.size() <<std::endl;
    std::vector<int>::iterator it;
    for (it = Holder.begin(); it < Holder.end(); it++){
        std::cout << "|" << *it << "|" << std::endl;
    }
}