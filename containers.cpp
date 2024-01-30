#include <iostream>
#include <iterator>
#include <vector>


int main ()
{
    std::vector<int>vot;
    for(int i = 0; i < 20; i++){
        vot.push_back(i);
    }

    for (int i = 0; i < 20; i++){
        std::cout << vot.at(i)<< std::endl;
    }

    vot.at(19) = 100;

      for (int i = 0; i < 20; i++){
        std::cout << vot.at(i)<< std::endl;
    }
    std::cout << "=========================="<< std::endl; 
    vot[5] = 20;
    std::cout << "=========================="<< std::endl; 
        for (int i = 0; i < 20; i++){
        std::cout << vot.at(i)<< std::endl;
    }
    vot.insert(vot.begin(), 49);
           for (int i = 0; i < 20; i++){
        std::cout << vot.at(i)<< std::endl;
    }
    std::cout << "============Iterator=============="<< std::endl; 
        std::vector<int>::iterator it;

        for (it = vot.begin(); it < vot.end(); it++){
            std::cout << " "<< std::endl;
        }
    return 0;
}