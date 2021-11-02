/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{   
    int x1,y1;
    int x2,y2;
    int x3,y3;

    while(std:: cin>>x1>>y1>>x2>>y2>>x3>>y3){

        Ponto P1{x1,y1}, P2{x2,y2}, P3{x3,y3};
        string location{};
        
        switch (pt_in_rect(P1, P2, P3))
        {
            case INSIDE: location = "inside"; break;

            case BORDER: location = "border"; break;

            case OUTSIDE: location = "outside"; break;
            
            default: location = "invalid"; break;
        }
        
            std:: cout << location << std::endl;
    }

    return 0;
}
