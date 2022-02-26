/* PPROGRAMA QUE SUME PARES E IMPARES*/
#include <iostream>

using namespace std;

int main(int argc, char const*argv[])
{
    //VARIABLES
    int pares = 0, impares = 0, total = 0;
    
    //PARES
    for (int i = 1; i <= 10; i++) 
    {
        if (i % 2 == 0){
            pares = pares + i;
        }
        cout << i << "  ";
    }
    
    //IMPARES
    for (int i = 1; i <= 10; i++) 
    {
        if (i % 2 == 1){
            impares = impares + i;
        }
        cout << i << "  ";
    }
    
    //SUMA DE PARES E IMPARES
    total=pares+impares;

    cout << endl;
    
    //DATOS DE SALIDA
    cout << "\n Total Pares: " << pares;
    cout << "\n Total Impares: " << impares;
    cout << "\n Total suma de pares e impares: " << total;
    return 0;
}
