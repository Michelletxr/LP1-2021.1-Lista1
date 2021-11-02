#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    
    vector <unsigned int> fibSequencia{}; 
    int n0=0, n1=1, n2=1;

    for(n2;n2<n;){
        
        fibSequencia.push_back(n2);
        n2 = n1 + n0;
        n0=n1;
        n1=n2;

    }

    
    return fibSequencia;
}
