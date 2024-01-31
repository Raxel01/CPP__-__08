/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:49:51 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/31 12:09:36 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iomanip>

const char* Badinstanciation::what() const throw(){
    return (" No Parametres to instanciate Span Class ");
}


const char* NoAvailableSpace::what() const throw(){
    return (" No Space Left on Vector Holder : ");
}

const char* NospanCanbefound::what() const throw(){
    return ("Sorry ! No Span Can Be Founnnnd !");
}

/*****COOOOOPY CONSTRUCTOR*****/
Span::Span(const Span& Origine){
    *this=Origine;
}
/******************************/

/*****COPY ASSIGNMENT OPERATOR*/
Span& Span::operator=(const Span& Origine){
    if (this == &Origine){
        this->_MAXMEMBER = Origine._MAXMEMBER;
        this->Holder.clear();
        this->Holder = Origine.Holder;
        this->FulledMember = Origine.FulledMember;
    }
    return (*this);

}
/******************************/

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

size_t  Span::longestSpan()
{
    if (FulledMember >= 2)
    {
        std::sort(Holder.begin(), Holder.end());
        std::vector<int>::iterator vectbeg = Holder.begin();
        std::vector<int>::iterator vectend = Holder.end() - 1;
        return (*vectend - *vectbeg);
    }
    else
        throw NospanCanbefound();
}

size_t  Span::shortestSpan()
{
    if (FulledMember >= 2){
        size_t ReferenceSpan = this->longestSpan();
        std::sort(Holder.begin(), Holder.end());
        std::vector<int>::iterator vectbeg = Holder.begin();
        std::vector<int>::iterator vectend = Holder.end() - 1;
        while (vectbeg != vectend){
            if (*(vectbeg + 1) - (*vectbeg) < static_cast<int>(ReferenceSpan)){
                ReferenceSpan = *(vectbeg + 1) - (*vectbeg);
            }
            vectbeg++;
        }
        return (ReferenceSpan);
    }
    else
        throw NospanCanbefound();
}

void    Span::getClassData() {
    std::cout << "Numbers In mY Vector : " << this->FulledMember << std::endl;
    std::cout << "My Vector Holder size: " << this->_MAXMEMBER <<std::endl;
    std::cout << "Reverify size Holder : "<< Holder.size() <<std::endl;
    std::vector<int>::iterator it;
    int elem (0);
    std::cout << "***************************************************"<< std::endl;
    for (it = Holder.begin(); it < Holder.end(); it++){
        elem++;
        std::cout << "|" << std::setw(4) << *it;
        if (elem % 10 == 0)
            std::cout << "|\n"<< std::endl;
    }
    std::cout << ""<<std::endl;
    std::cout << "***************************************************"<< std::endl;
}