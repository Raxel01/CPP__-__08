#include <iostream>
#include <iterator>
#include <vector>
#include <deque>
#include <stack>

                                                //STL : Standard Templates Library
            // ----------------------------------------------------------------------------
                    // |                     |                      |               |
                // Contenaires          ALGORITHMES              iterators        Functor (Fobject);
                        // |                    |___                |__________________
        // =================================        |                                 |
            // |                    |               |-(! && Modifyable)               |
    // sequenciell                 adaptif          |-Remplacement - Suppression      |----|
       //|                               //|      //Functions :                            |
    // |                              |           Sort();                     point to an element of Your Contenaire
    // vectors                      Stack           Find();                         it's used to may calculate how mush element wakha kaynin Funcrtion Wajdeiin Dejaa
    // deqeu                        Qeu             
    // Arrays÷
    // Lists

int main ()
{
    std::vector<int>  vectoro;
    std::deque<char> dequotor;

    // dequotor.resize(10);
    dequotor.push_back(122);
    dequotor.push_back(121);
    dequotor.push_back(120);
    dequotor.push_back(119);
    dequotor.push_back(118);
    dequotor.push_back(117);
    dequotor.push_back(116);
    dequotor.push_back(115);
    dequotor.push_back(114);
    dequotor.push_back(113);


    // vectoro.resize(10);

    vectoro.push_back(9);
    vectoro.push_back(90);
    vectoro.push_back(50);
    vectoro.push_back(40);
    vectoro.push_back(30);
    vectoro.push_back(20);
    vectoro.push_back(25);
    vectoro.push_back(15);
    vectoro.push_back(19);
    vectoro.push_back(39);
    vectoro.insert(vectoro.begin(), 9999);
    // vectoro.emplace_front();
    // vectoro.pop_back();
    // vectoro.pop_back();
    // vectoro.pop_back();
    // vectoro.pop_back();
    // vectoro.pop_back();



    std::vector<int>::iterator it = vectoro.begin();
    std::vector<int>::iterator itend = vectoro.end();

    std::deque<char>::iterator itq = dequotor.begin();
    std::deque<char>::iterator itendq = dequotor.end();

    std::cout << "Vectoro :" << vectoro.front()<< std::endl;
    std::cout << "dequotor:" << dequotor.front()<< std::endl;
    while (it != itend){
        std::cout << (*it) << "-"<< std::endl;
        it++;
    }
    std::cout << "=====================================" << std::endl;
       while (itq != itendq){
        std::cout << (*itq) << "-"<< std::endl;
        itq++;
    }
    // std::cout << "--CP :" << vectoro.capacity() << std::endl;
    // std::cout << vectoro.size() << std::endl;
    // std::stack<int>vol;
    // vol.push(9);
    // vol.push(8);
    // vol.push(7);
    // vol.push(6);
    // vol.push(5);
    // vol.push(4);
    // vol.push(3);

    // int x = vol.top();
    // x = 1999;
    // // vol.pop();
    // // int Y = vol.top();
    // // std::cout << "x : " << "top 1 : " << x << " " << vol.size() << "Top after pop : " << Y<< std::endl;
    //  while (!vol.empty()) {
    //     std::cout << vol.top() <<" ";
    //     vol.pop();
    // }
    return 0;
}

// int main ()
// {
//       std::vector<int>noT;
//     for(int i = 0; i < 40; i+=2){
//         noT.push_back(i);
//     }

//     std::vector<int>vot;
//     for(int i = 0; i < 20; i++){
//         vot.push_back(i);
//     }
//     std::vector<int>volvons = vot;

//     for (int i = 0; i < 20; i++){
//         std::cout << volvons.at(i)<< std::endl;
//     }
//     std::cout << "============================="<< std::endl;
//      for (int i = 0; i < 20; i++){
//         std::cout << noT.at(i)<< std::endl;
//     }
//     volvons.clear()
//     volvons=noT;
//       for (int i = 0; i < 20; i++){
//         std::cout << volvons.at(i)<< std::endl;
//     }


    
    // vot.at(19) = 100;

    //   for (int i = 0; i < 20; i++){
    //     std::cout << vot.at(i)<< std::endl;
    // }
    // std::cout << "=========================="<< std::endl; 
    // vot[5] = 20;
    // std::cout << "=========================="<< std::endl; 
    //     for (int i = 0; i < 20; i++){
    //     std::cout << vot.at(i)<< std::endl;
    // }
    // vot.insert(vot.begin(), 49);
    //        for (int i = 0; i < 20; i++){
    //     std::cout << vot.at(i)<< std::endl;
    // }
    // std::cout << "============Iterator=============="<< std::endl; 
    //     std::vector<int>::iterator it;

    //     for (it = vot.begin(); it < vot.end(); it++){
    //         std::cout << " "<< std::endl;
    //     }
//     return 0;
// }