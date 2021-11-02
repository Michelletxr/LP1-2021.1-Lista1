/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int n{},m{};


   while(cin >> std::ws>> m >> n) {
    int soma{};

    //tirar duvisa sobre o while
      
    if(n>0)

       for (int i = m; i<n+m; i++)
           soma+=i;
    else if(n<0)

        for (int j = m; j>n+m; j--)
           soma+=j;
    else
        soma = m; //default
    
    std:: cout << soma << std:: endl;
    
  // realização da contagem em relação aos intervalos
}

  
   
    // TODO: Adicione seu código aqui. 

    return 0;
}
