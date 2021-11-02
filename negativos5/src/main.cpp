#include <iostream>
using std::cin;
using std::cout;
const int SIZE = 5; // input size.

int main(void)
{
    int numNgeativos{};

    for(int i=0; i<SIZE ; i++){
        
        int valor{};

        std::cin >> valor;
        
        if(valor<0){
            numNgeativos+=1;
        }

    }
    
    std:: cout << numNgeativos;
    // TODO: Adicione aqui seu código.

    return 0;
}
