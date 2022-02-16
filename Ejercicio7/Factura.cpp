#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;

    cout << "INGRESE EL SUBTOTAL DE LA FACTURA: ";
    cin >> subtotal;

    total = subtotal + (subtotal*0.15);

    cout << endl;
    cout<< "EL TOTAL A PAGAR ES: " << total;

    return 0;
}
