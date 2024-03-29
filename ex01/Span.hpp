/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:47:03 by abait-ta          #+#    #+#             */
/*   Updated: 2024/02/01 12:25:24 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <deque>

class Badinstanciation: public std::exception
{
    public :
        virtual const char* what() const throw();
};

class NoAvailableSpace: public std::exception
{
    public :
        virtual const char* what() const throw();
};

class NospanCanbefound : public std::exception
{
    public :
        virtual const char* what() const throw();
};

class Span
{
    private :
        size_t _MAXMEMBER;
        std::vector<int>Holder;
        size_t  FulledMember;
    public :
        Span();
        Span(size_t AssignMax);
        Span(const Span& Origine);
        Span& operator=(const Span& Origine);
        void    addNumber(int NumberToAdd);
        void    getClassData() ;
        template <class T>
        void    addNumber(T begin, T end){ 
        if ((long)(_MAXMEMBER - FulledMember) >= labs(end - begin)){
            Holder.insert(Holder.begin()+ FulledMember, begin, end);
             FulledMember += labs(end - begin);
             Holder.resize(FulledMember);
        }
         else
            throw NoAvailableSpace();
        };
        size_t  shortestSpan();
        size_t  longestSpan();
        ~Span();
};

#endif