#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int medida;
	float base;
	float altura;
	char metros [18]=" metros cuadrados";
	char centimetros[23]=" centímetros cuadrados";
	
	do {
		cout << "Digite la medida que va a usar 1(m), 2(cm): " << endl;
		cin >> medida;
					
		if (medida == 1){
			do{
			cout << "Digite la base del triángulo en metros: " << endl;
			cin >> base;
			if(base <= 0){
			cout << "El número no es válido" << endl;
			}
			} while(base <= 0);
			do{
			cout << "Digite la altura del triángulo en metros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El número de la altura no es válido" << endl;
			}
			} while(altura <= 0);
			system("cls");
			cout << "Figura: Triángulo \n" << endl;
			cout << "El área del triángulo es: " << base * altura << metros << endl;
		}	
		
		else if (medida == 2){
			do{
			cout << "Digite la base del triángulo en centímetros: " << endl;
			cin >> base;
			if(base <= 0){
			cout << "El número no es válido" << endl;
			}
			} while(base <= 0);
			do{
			cout << "Digite la altura del triángulo en centímetros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El número de la base no es válido" << endl;
			}
			} while(altura <= 0);
			system("cls");
			cout << "Figura: Triángulo \n" << endl;
			cout << "El área del triángulo es: " << (base * altura)/2 <<centimetros << endl;
		}	
				
		else{
			cout << "El número ingresado no es válido" << endl;
		}
	
	}while (medida != 1 & medida != 2);
	
	cout << "\n";
	
	cout << "Nombre: Kevin Andrés Torrecilla Martínez";
	return 0;
}
