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
	
	// Se pide los datos del zapato
	
	cout << "Digite la referencia del zapato..."<< endl << "\n";
	cin >> Ref;
	
	cout << "\n";	
	
	fflush(stdin);
	
	// la descripcion del zapato
	
	cout << "Digite una descripcion del zapato..."<< endl << "\n";
	cin.getline(Desz, 70);
	
	cout << "\n";
	
	// La talla del zapato
	
	cout << "Digita la talla..." << endl << "\n";
	cin >> Talla;
	
	cout << "\n";
	
	// Se hace un ciclo hasta que digite que el valor es S o N o las letras en minusculas
	
	do{
		cout << "Digita la letra si está disponible o no para la venta S/N..." << endl << "\n";
		cin >> Disp;
		cout << "\n";
		if (Disp != 'S' && Disp != 'N' && Disp != 's' && Disp != 'n'){
			cout << "Valor no válido, ingrese otro" << endl << "\n";
		}
	}
	while(Disp != 'S' && Disp != 'N' && Disp != 's' && Disp != 'n');
	
	// El costo del zapato
	
	cout << "Digita el costo del zapato" << endl << "\n";
	cin >> Costo;
	
	cout << "\n";
	
	// El precio del zapato
	
	cout << "Digita el precio de venta del zapato" << endl << "\n";
	cin >> Precio;
	
	// Se limpia la pantalla y se muestran los siguientes datos que digitamos anteriormente ya organizados
	
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
