#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // ENTRADA DE DATOS
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento=0; 
    double calculoDescuento=0;
    double calculoImpuesto;

    cout << "INGRESE EL SUBTOTAL DE LA FACTURA: ";
    cin >> subtotal;

    cout << "INGRESE CUANTO ES EL DESCUENTO (0, 10, 15, 20): ";
    cin >> descuento;

    //PROCESO DE DATOS
    calculoDescuento= (subtotal*descuento)/100;
    calculoImpuesto= (subtotal-calculoDescuento)*0.15;
    total = subtotal - calculoDescuento + calculoImpuesto;

    // SALIDA DE DATOS
    
    cout << endl;
    cout<< "TOTAL A PAGAR ES: " << total;

    return 0;
}
