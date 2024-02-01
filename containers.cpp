#include <iostream>
#include <iterator>
#include <vector>
#include <stack>

int main ()
{
    std::vector<int> vectoro;
    // vectoro.resize(10);
    vectoro.push_back(9);
    vectoro.push_back(90);
    vectoro.push_back(50);
    vectoro.push_back(40);
    vectoro.push_back(30);
    vectoro.push_back(20);
    vectoro.push_back(25);


    std::vector<int>::iterator it = vectoro.begin();
    std::vector<int>::iterator itend = vectoro.end();
    vectoro.resize(10);
    while (it != itend)
    {
        std::cout << *it << "-"<< std::endl;
        it++;
    }
    std::cout << "--CP :" << vectoro.capacity() << std::endl;
    std::cout << vectoro.size() << std::endl;
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