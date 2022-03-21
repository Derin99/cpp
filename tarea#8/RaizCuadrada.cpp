#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char const *argv[])
{
    double numero = 0;
    double raizCuadrada = 0;
    
   
    cout << "Ingrese Un Numero: " << endl;
    cin >> numero;
    raizCuadrada = sqrt(numero);
    cout << "La Raiz Cuadrada De "<< numero<< " Es: " <<raizCuadrada<< endl;
    

    return 0;
}
