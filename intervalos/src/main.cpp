/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;


void imprimePorcentagem(vector<int> listaValores)
{

   int contagem[5]{};

    for(int valor : listaValores){
        
        int indice{0};

        if(valor >=0 && valor <100){

            if(valor < 25){
                indice = 0;
            }else if(valor < 50){
                indice = 1;
            }else if(valor < 75){
                indice = 2;
            }else{
                indice = 3;
            }
            
        }else{
            indice = 4;
        }
        
        
       contagem[indice] += 1;

    }

    for(int valor : contagem){
        float valorPorcentagem = (float(valor) / listaValores.size())*100;
        std:: cout << std::setprecision(4) << valorPorcentagem <<'\n';
    }
    

}



int main(void)
{   
    int x;
    vector<int>valores;

    while( cin >> std::ws >> x) {

        // realização da contagem em relação aos intervalos
        valores.push_back(x);
        
    }

    imprimePorcentagem(valores);

    return 0;
}
