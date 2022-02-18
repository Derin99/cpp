#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true) {
        system ("cls");

        cout << "       M E N U       " << endl;
     
        cout << endl;
        cout << " #1: - Cafe y Granitas" << endl;
        cout << endl;
        cout << " #2: - Reposteria" << endl;
        cout << endl;
        cout << " #0: - Salir" << endl; 
		cout << endl;
		cout << endl;
        cout << "INGRESAR UNA OPCION DEL MENU: ";
        
        cin  >> opcion;

        if (opcion ==1) {
            system ("cls");
            cout << "ESTAS EN EL MENU DE CAFE Y GRANITAS" << endl;
            system("pause");
        }

        if (opcion ==2) {
            system ("cls");
            cout << "ESTAS EN EL MENU DE REPOSTERIA" << endl;
            system("pause");
        }

        if (opcion ==0) {
            break;
        }

        switch (opcion)
        {
            case 1:
            {
                system ("cls");
                cout << "Estas en el menu de cafe y granita" << endl;
                system("pause");
                break;
            }
            case 2: 
            {
                system ("cls");
                cout << "Estas en el menu de cafe y granita" << endl;
                system("pause");
                break;
            }
        default:
            {
                cout <<"INGRESE UNA OPCION VALIDA (0, 1, 2)" << endl;
                system ("pause");
                break;
            }

        }    
    }

    cout << endl;
    cout << "Saliste del sistema";
    return 0;
}
