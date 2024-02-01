/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:47:17 by abait-ta          #+#    #+#             */
/*   Updated: 2024/02/01 10:35:36 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <deque>

template <class T,typename DataType=std::deque<T> >
class MutantStack : public std::stack<T>
{   
    public :
        typedef typename DataType::iterator iterator;
        MutantStack(){};
        MutantStack(const MutantStack& O){*this=O;};
        MutantStack& operator=(const MutantStack& O){
            static_cast<void>(O);
            return O;
        };
        ~MutantStack(){};
        iterator begin(){
            return (this->c.begin());
        };
        iterator end(){
            return (this->c.end());
        };
};

#endif