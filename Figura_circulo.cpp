#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int medida;
	float radio;
	float pi = 3.1416;
	char metros [18]=" metros cuadrados";
	char centimetros[23]=" centímetros cuadrados";
	
	do {
		cout << "Digite la medida que va a usar 1(m), 2(cm): " << endl;
		cin >> medida;
					
		if (medida == 1){
			do{
			cout << "Digite el radio del círculo en metros: " << endl;
			cin >> radio;
			if(radio <= 0){
			cout << "El número no es válido" << endl;
			}
			} while(radio <= 0);
			cout << "El área del círculo es: " << radio * radio * pi << metros << endl;
		}	
		
		else if (medida == 2){
			do{
			cout << "Digite el radio del círculo en metros: " << endl;
			cin >> radio;
			if(radio <= 0){
			cout << "El número no es válido" << endl;
			}
			} while(radio <= 0);
			cout << "El área del círculo es: " << radio * radio * pi <<centimetros << endl;
		}	
				
		else{
			cout << "El número ingresado no es válido" << endl;
		}
	
	}while (medida != 1 & medida != 2);
	
	
	system("pause");
	return 0;
}
