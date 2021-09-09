#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int Ref;
	int Talla;
	char Disp;

	cout << "ADMINISTRAR VENTA DE ZAPATOS"<< endl;
	
	cout << "Digite la referencia del zapato..."<< endl << "\n";
	cin >> Ref;
	
	cout << "\n";	
	
	fflush(stdin);
	
	cout << "Digite una descripcion del zapato..."<< endl << "\n";
	string Desz;
	getline(cin, Desz);
	
	cout << "Digita la talla" << endl;
	cin >> Talla;
	
	cout << "Digita la letra si está disponible o no para la venta S/N" << endl;
	cin >> Disp;
	
	cout << "Digita el costo del zapato";moa
	
	system("PAUSE");
}
