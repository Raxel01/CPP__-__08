/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-ta <abait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:40:55 by abait-ta          #+#    #+#             */
/*   Updated: 2024/01/31 12:16:02 by abait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }

int main()
{
    try{
            Span OBJ(200); //16
            // OBJ.addNumber(25);
            // OBJ.addNumber(35);
            // OBJ.addNumber(59);
            // OBJ.addNumber(55);
            // OBJ.addNumber(50);
            // OBJ.addNumber(135);
            // OBJ.addNumber(65);
            // OBJ.addNumber(8);
            // OBJ.addNumber(45);
            // OBJ.addNumber(95);
            // OBJ.addNumber(5);
            // OBJ.addNumber(3);
            // OBJ.addNumber(9);
            // OBJ.addNumber(1000);
            // OBJ.addNumber(85);
            // OBJ.addNumber(0);
            std::deque<int> deq;
            int lil = -200;
            for (size_t i = 0; i < 200; i++){
                deq.insert(deq.begin()+ i, lil);
                lil+=4;
            }
            std::deque<int>::iterator deqbeg = deq.begin();
            std::deque<int>::iterator deqend = deq.end();
            OBJ.addNumber<std::deque<int>::iterator>(deqbeg, deqend);
            std::cout << "Longest Spane :" << OBJ.longestSpan() << std::endl;
            std::cout << "Shortest Span :" << OBJ.shortestSpan()<< std::endl;
            std::cout << "====================================="<< std::endl;
            OBJ.getClassData();
    }catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}