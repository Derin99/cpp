 #include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system ("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Cafe Negro" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1 ,40);
            break;
        
        case 2:
            agregarProducto("1 Expresso - L 30.00", 1 ,30);
            break;
        
        case 3:
            agregarProducto("1 Cafe Negro - L 25.00", 1 ,25);
            break;
        
        default:
            {
                cout << "opcion no valida" << endl << endl;
                system("pause");
                return;
                break;
            }
        
        }

        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system("pause");

        break;
    }

    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Jugo Natural" << endl;
        cout << "2 - Granita de Cafe" << endl;
        cout << "3 - Refresco" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Jugo Natural - L 20.00", 1 ,20);
            break;
        
        case 2:
            agregarProducto("1 Granita de Cafe - L 50.00", 1 ,50);
            break;
        
        case 3:
            agregarProducto("1 Refresco - L 20.00", 1 ,20);
            break;
        
        default:
            {
                cout << "opcion no valida" << endl << endl;
                system("pause");
                return;
                break;
            }
        
        }
        
        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system ("pause");

        break;
    }

    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "*************" << endl;
        cout << "1 - Donas" << endl;
        cout << "2 - Pastel" << endl;
        cout << "3 - Donas Rellenas" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Donas - L 150.00", 1 ,150);
            break;
        
        case 2:
            agregarProducto("1 Pastel - L 300.00", 1 ,300);
            break;
        
        case 3:
            agregarProducto("1 Donas Rellenas - L 200.00", 1 ,200);
            break;
        
        default:
            {
                cout << "opcion no valida" << endl << endl;
                system("pause");
                return;
                break;
            }
        
        }
        
        cout << endl;
        cout << "Producto Agregado" << endl << endl;
        system ("pause");
        
        break;
    }
    
    default:
        break;
    }
}
