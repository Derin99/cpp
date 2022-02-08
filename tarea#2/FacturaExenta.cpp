	//  FACUTA EXENTA O NO  // 

#include <iostream>


using namespace std; 

int main(int argc, char** argv){

	// DATOS DE ENTRADA // 
	
	double SubTotal =0, Total= 0, CalculoDescuento=0, CalculoImpuesto=0;
	double Impuesto = 0.15;
	int Descuento = 0;
	char EstaExenta;
	
	
	// INGRESANDO LOS DATOS // 
	
	cout <<"\n INGRESE EL SUBTOTAL DE LA FACTURA: ";
	cin >> SubTotal;
	
	cout <<"\n INGRESE EL DESCUENTO (0, 10, 15, 20): ";
	cin>>Descuento;
	
	cout <<"\n LA FACTURA ES EXENTA? (S/N)?: ";
	cin>> EstaExenta;
	
	
	// PROCESANDO LOS DATOS // 
	
	if (EstaExenta == 's' || EstaExenta == 'S')
	{
	CalculoDescuento = (SubTotal * Descuento) / 100;
	Total= SubTotal - CalculoDescuento;
	}
	else
	{
	CalculoDescuento = (SubTotal * Descuento) / 100;
	CalculoImpuesto = (SubTotal - CalculoDescuento) * Impuesto;
	Total= SubTotal - CalculoDescuento+ CalculoImpuesto;
	}
	
	
	// SALIDA DE DATOS //  
	
	cout <<"\n EL TOTAL A CANCELAR ES: " << Total;
	
	return 0;
}

