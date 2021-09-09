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
	
	cout << "Digita la letra si está disponible o no para la venta S/N" << endl << "\n";
	char Disp;
	cin >> Disp;
	
	switch (Disp){
		case 'S': cout << "SIUUUUUU" << endl; break;
	}
	
	cout << "Digita el costo del zapato";
	cin >> Costo;
	
	cout << "Digita el precio de venta del zapato";
	cin >> Precio;
	system("PAUSE");
}
