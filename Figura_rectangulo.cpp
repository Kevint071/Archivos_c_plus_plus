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
	
	do {
		cout << "Digite la medida que va a usar 1(m), 2(cm): " << endl;
		cin >> medida;
					
		if (medida == 1){
			do{
			cout << "Digite la base del rectángulo en metros: " << endl;
			cin >> base;
			if(base <= 0){
			cout << "El número no es válido" << endl;
			}
			} while(base <= 0);
			do{
			cout << "Digite la altura del rectángulo en metros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El número de la altura no es válido" << endl;
			}
			} while(altura <= 0);
		}	
		
		
		if (medida == 2){
			do{
			cout << "Digite la base del rectángulo en centímetros: " << endl;
			cin >> base;
			if(base <= 0){
			cout << "El número no es válido" << endl;
			}
			} while(base <= 0);
			do{
			cout << "Digite la altura del rectángulo en centímetros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El número de la base no es válido" << endl;
			}
			} while(altura <= 0);
		}	
		
		
				
		else{
			cout << "El número ingresado no es válido" << endl;
		}
	
	}while (medida != 1 & medida != 2);
	
	
	
	cout << "El área del rectángulo es: " << base * altura << endl;
	
	system("pause");
	return 0;
}
