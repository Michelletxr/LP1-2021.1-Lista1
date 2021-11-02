#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    
    for (size_t i = 0; i < int(SIZE/2); i++)
    {
        
        std::swap(arr[i],arr[SIZE-(1+i)]);

    }

}
