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
			cout << "Digite la base del rect�ngulo en metros: " << endl;
			cin >> base;
			if(base <= 0){
			cout << "El n�mero no es v�lido" << endl;
			}
			} while(base <= 0);
			do{
			cout << "Digite la altura del rect�ngulo en metros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El n�mero de la altura no es v�lido" << endl;
			}
			} while(altura <= 0);
		}	
		
		
		if (medida == 2){
			do{
			cout << "Digite la base del rect�ngulo en cent�metros: " << endl;
			cin >> base;
			if(base <= 0){
			cout << "El n�mero no es v�lido" << endl;
			}
			} while(base <= 0);
			do{
			cout << "Digite la altura del rect�ngulo en cent�metros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El n�mero de la base no es v�lido" << endl;
			}
			} while(altura <= 0);
		}	
		
		
				
		else{
			cout << "El n�mero ingresado no es v�lido" << endl;
		}
	
	}while (medida != 1 & medida != 2);
	
	
	
	cout << "El �rea del rect�ngulo es: " << base * altura << endl;
	
	system("pause");
	return 0;
}
