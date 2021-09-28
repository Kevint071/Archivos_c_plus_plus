#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	unsigned long Talla, Costo, Cant;
	char Disp, Tipo, Ref[0], Desz[0];
	
	cout << "ADMINISTRAR VENTA DE ZAPATOS"<< endl;
	
	// Se pide los datos del zapato
	
	cout << "Digite la referencia del zapato..."<< endl << "\n";
	cin.getline(Ref, 30);
	
	cout << "\n";
	
	// la descripcion del zapato
	
	cout << "Digite una descripcion del zapato..."<< endl << "\n";
	cin.getline(Desz, 80);
	
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
	
	// Cantidad de zapatos
	
	cout << "Digite la cantidad de zapatos..." << endl << "\n";
	cin >> Cant;
	
	cout << "\n";
	
	// El costo del zapato
	
	cout << "Digita el costo de unidad del par de zapatos..." << endl << "\n";
	cin >> Costo;
	
	cout << "\n";
	
	if (Costo <= 30000){
		
		Tipo = 'A';		
	}
	
	if (Costo > 30000 & Costo <= 60000){
		
		Tipo = 'B';
	}
	
	if (Costo > 60000){
		Tipo = 'C';
	}	
	
	// Se limpia la pantalla y se muestran los siguientes datos que digitamos anteriormente ya organizados
	
	system("cls");
	
	unsigned long Costo_total = Costo * Cant;
	float Porcentaje_costo, Porcentaje, Precio, Precio_total;
	
	cout << "LOS DATOS REGISTRADOS SON LOS SIGUIENTES" << endl << "\n";
	cout << "REFERENCIA: " << Ref << endl;
	cout << "TIPO: " << Tipo << endl;
	cout << "DESCRIPCIÓN: " << Desz << endl;
	cout << "TALLA: " << Talla << endl;
	cout << "DISPONIBILIDAD: " << Disp << endl;
	cout << "CANTIDAD DE ZAPATOS: " << Cant << endl;
	cout << "COSTO UNIDAD: " << Costo << endl;
	cout << "COSTO TOTAL: " << Costo_total << endl;
	
	if(Tipo == 'A'){
		Precio = (Costo * 0.5) + Costo;
		Porcentaje = 50;
		cout << "PRECIO UNIDAD: " << Porcentaje_costo + Costo << endl;
	}
		if(Tipo == 'B'){
		Precio = (Costo * 0.4) + Costo;
		Porcentaje = 40;
		cout << "PRECIO UNIDAD: " << Porcentaje_costo + Costo << endl;
	}
	
	if(Tipo == 'C'){
		Precio = (Costo * 0.3) + Costo;
		Porcentaje = 30;
		cout << "PRECIO UNIDAD: " << Porcentaje_costo + Costo << endl;
	}
	
	unsigned long Utilidad_u = Precio - Costo;
	Precio_total = Precio * Cant;
	
	cout << "PRECIO TOTAL DE " << Cant << " UNIDADES: " << Precio_total << endl;
	cout << "UTILIDAD POR UNIDAD: " << Utilidad_u << endl;
	cout << "UTILIDAD TOTAL: " <<Utilidad_u * Cant << endl;
	cout << "PORCENTAJE DE UTILIDAD: " << Porcentaje << " %" << endl << "\n";
	cout << "Gracias por digitar la información";
}
