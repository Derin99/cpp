#include <iostream>

using namespace std;

int sumar () {
    return 5 + 7;
}

string nombreCompleto() {
    string nombre="Derin";
    string apellido="Orellana";
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
    int resultado=sumar();
    string nombreApellido= nombreCompleto();

    cout << resultado << endl;
    cout << nombreApellido;

    cout<< endl;
   
    return 0;
}
