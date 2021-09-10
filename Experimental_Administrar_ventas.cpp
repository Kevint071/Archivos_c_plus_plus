#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	unsigned long Ref, Talla, Costo, Precio;
	char Desz[70];
	char Disp;

	cout << "ADMINISTRAR VENTA DE ZAPATOS"<< endl;
	
	cout << "Digite la referencia del zapato..."<< endl << "\n";
	cin >> Ref;
	
	cout << "\n";	
	
	fflush(stdin);
	
	cout << "Digite una descripcion del zapato..."<< endl << "\n";
	cin.getline(Desz, 70);
	
	cout << "\n";
	
	cout << "Digita la talla..." << endl << "\n";
	cin >> Talla;
	
	cout << "\n";
	
	do{
		cout << "Digita la letra si está disponible o no para la venta S/N..." << endl << "\n";
		cin >> Disp;
		cout << "\n";
		if (Disp != 'S' && Disp != 'N' && Disp != 's' && Disp != 'n'){
			cout << "Valor no válido, ingrese otro" << endl << "\n";
		}
	}
	while(Disp != 'S' && Disp != 'N' && Disp != 's' && Disp != 'n');
	
	cout << "Digita el costo del zapato" << endl << "\n";
	cin >> Costo;
	
	cout << "\n";
	
	cout << "Digita el precio de venta del zapato" << endl << "\n";
	cin >> Precio;
	
	system("cls");
	
	cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl << "\n";
	cout << "REFERENCIA: " << Ref << endl;
	cout << "DESCRIPCIÓN: " << Desz << endl;
	cout << "TALLA: " << Talla << endl;
	cout << "DISPONIBILIDAD: " << Disp << endl;
	cout << "COSTO: " << Costo << endl;
	cout << "PRECIO: " << Precio << endl << "\n";
	cout << "Gracias por digitar la información";
}
