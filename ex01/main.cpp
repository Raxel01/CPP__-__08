/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:40:55 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/30 18:29:30 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
            Span OBJ(109);
            std::deque<int> deq;
            for (size_t i = 0; i < 109; i++){
                deq.insert(deq.begin()+ i, i);
            }
            std::deque<int>::iterator deqbeg = deq.begin();
            std::deque<int>::iterator deqend = deq.end();
            OBJ.addNumber<std::deque<int>::iterator>(deqbeg, deqend);
            OBJ.getClassData();
    }catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    
    return (0);
}