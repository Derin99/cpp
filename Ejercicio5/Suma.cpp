#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{ 
   int a = 0;
   int b = 0;
   int resultado = 0;
// ENTRADA DE DATOS
   cout << "INGRESE EL VALOR DE a: ";
   cin >> a;

   cout << endl;

   cout << "INGRESE EL VALOR DE b: ";
   cin >> b;

   // PROCESO DE DATOS
   resultado = a+b;

   // SALIDA DE DATOS
   cout << endl;
   cout << "LA SUMA DE a + b ES: " << resultado;

    

    return 0;
}
