#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int Ref, Talla, Costo, Precio;	

	cout << "ADMINISTRAR VENTA DE ZAPATOS"<< endl;
	
	cout << "Digite la referencia del zapato..."<< endl << "\n";
	cin >> Ref;
	
	cout << "\n";	
	
	fflush(stdin);
	
	cout << "Digite una descripcion del zapato..."<< endl << "\n";
	string Desz;
	getline(cin, Desz);
	
	cout << "Digita la talla" << endl << "\n";
	cin >> Talla;
	
	fflush(stdin);
	
	cout << "Digita la letra si está disponible o no para la venta S/N" << endl << "\n";
	string Disp;
	getline(cin, Disp);
	
	if (Disp == "Sss s"){
		cout << "moana";
	}
	
}
