#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	bool salida = false;
    int cuenta;
    int opcion = 0, saldo, agregar, numero, retiro, saldo_inicial =  50000;
    saldo = saldo_inicial;
	string username;
	string password;
		
	while (salida == false){
	system ("cls");
			
	cout << "\t**************  CAJERO ATLANTIDA VIRTUAL  **************" << endl<< endl<< endl;
	cout << endl;
	
	cout << "INGRESE SU USUARIO:"<< endl; cin >> username;
	cout << endl << endl<< endl;
	
	cout << "INGRESE SU CONTRASENA:"<< endl; cin >> password;
    cout << endl<< endl<< endl;
    
    
    if (username == "Derin" && password == "1234"){
	salida = true;
		   
		   }
   	else if ( username !="Derin") { 
	   	   cout << "Usuario Invalido:"<< endl; 
	   	   system ("pause");
	   	   }
	   	   
   	else if ( password !="1234") { 
	   	   cout << "Contrasena Incorrecta:"<< endl; 
	   	   system ("pause");
		   }
    }
    

        while (true) {
        system ("cls");

        cout << "\t***************************************************************" << endl;
        cout << "\t****************** CAJERO VIRTUAL ATLANTIDA *******************" << endl;
        cout << "\t***************************************************************" << endl;
        cout << endl;
        cout << endl;
        
        
        cout << " B I E N V E N I D O    S R. (A) " << endl<< endl<< endl;
        cout << endl;
        
                
        cout << " QUE ACCION DESEA REALIZAR?" << endl<< endl<< endl;
        cout << endl;
        
        cout << " - 1: - DEPOSITO EN CUENTA" << endl;
        cout << endl;
        
        cout << " - 2: - RETIRO EN CUENTA" << endl;
        cout << endl;
        
        cout << " - 3: - SALDO EN CUENTA" << endl; 
		cout << endl;
		
		cout << " - 4: - SALIR DEL CAJERO " << endl; 
		cout << endl << endl<< endl;
		
        cout << "ESCOJA UNA OPCION DEL CAJERO: "; 
        cin  >> opcion;
        	

        if (opcion ==1) {
            system ("cls");
            cout << "ESTAS EN EL REGISTRO DE DEPOSITO DE CUENTA" << endl << endl;
            cout << endl;
            	if (opcion==1){
				cout<<"CUANTO DESEA DEPOSITAR? "<< endl;
				cout << endl << endl;
				cin>>agregar;
				cout << endl;
				saldo = saldo + agregar;
				cout<<"S A L D O: " << endl << endl << saldo;
				cout << endl << endl;
	}
            	system("pause");
        }



        if (opcion ==2) {
            system ("cls");
            cout << "ESTAS EN EL REGISTRO DE RETIRO DE CUENTA" << endl << endl;
            cout << endl;
            	if (opcion==2) {
    			cout<<"CUANTO DESEA RETIRAR? " << endl;
    			cout << endl << endl;
    			cin>>retiro;
    			if (retiro>50000){
    			cout<<"LA CANTIDAD REGISTRADA ES MAYOR, DIGITE NUEVAMENTE CANTIDAD A RETIRAR:"<< endl << endl;
    			cout << endl << endl;
    			cin>>retiro;
    			}
    			saldo = saldo - retiro;
    			cout << endl;
    			cout<<"S A L D O : " << endl << endl << saldo;
    			cout<< endl << endl;
    }
           		system("pause");
    	}




        if (opcion ==3) {
            system ("cls");
            cout << "ESTAS EN EL REGISTRO DE SALDO DE CUENTA" << endl << endl;
            cout << endl<< endl;
            	if (opcion==3) {
    			cout<<"CANTIDAD DE DISPONIBLE DE LA CUENTA "<< endl ;
    			cout<< endl << endl <<"S A L D O : "<< endl << endl << saldo;
    			cout<< endl << endl;
	}
				system("pause");
            	
    	}
      	    	
      	
        if (opcion ==4) {
                cout << endl << endl << endl << endl << "\t******** GRACIAS POR USAR SU CAJERO ATLANTIDA VIRTUAL ******** ";
                cout<< endl << endl;
          		break;
            
	}

        
        }    
                
    return 0;
}
