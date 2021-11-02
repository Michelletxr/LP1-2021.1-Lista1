#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], std:: size_t n )
{
    pair<int, int>minMax{};
    int min{V[0]}, a={}, max{V[0]}, b={};

    for (std::size_t i = 0; i < n; i++){
        
        if(V[i]<min){ a = i; min=V[i];} //pega a posição do menor elemento

        if(V[i]>=max){ b = i;  max=V[i];} //pega a posição do maior elemento
      
    } 

    if(n==0){ a=b=-1;} // se o vetor for vazio

    minMax.first=a;
    minMax.second=b;
   
    return minMax;
}
