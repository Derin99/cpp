#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    cout << "INGRESE UNA OPCION ENTRE 1, 2 Y 3:" << endl; 
    cin >> opcion;

    switch (opcion)
    {
    case 1:
    {
        cout << "ESCOGISTE 1" << endl;
        break;
    }
    case 2:
       cout << "ESCOGISTE 2 " << endl;
       break;
       
    case 3:
        cout << "ESCOGISTE 3 "<< endl;
        break;

    default:
        cout << "OPCION INVALIDA "<< endl;
        break;
    
    }
    return 0;
}
