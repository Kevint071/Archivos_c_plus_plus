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
	char centimetros[23]=" cent�metros cuadrados";
	
	do {
		cout << "Digite la medida que va a usar 1(m), 2(cm): " << endl;
		cin >> medida;
					
		if (medida == 1){
			do{
			cout << "Digite la diagonal mayor del rombo en metros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El n�mero de la diagonal mayor no es v�lido" << endl;
			}
			} while(altura <= 0);
			do{
			cout << "Digite la diagonal menor del rombo en metros: " << endl;
			cin >> base;
			if(base <= 0){
			cout << "El n�mero de la diaognal menor no es v�lido" << endl;
			}
			} while(base <= 0);
						cout << "El �rea del tri�ngulo es: " << base * altura << metros << endl;
		}	
		
		else if (medida == 2){
			do{
			cout << "Digite la diagonal mayor del rombo en cent�metros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El n�mero de la diagonal mayor no es v�lido" << endl;
			}
			} while(altura <= 0);
			do{
			cout << "Digite la diagonal menor del rombo en cent�metros: " << endl;
			cin >> base;
			if(base <= 0){
			cout << "El n�mero de la diaognal menor no es v�lido" << endl;
			}
			} while(base <= 0);
			cout << "El �rea del rombo es: " << (base * altura) <<centimetros << endl;
		}	
				
		else{
			cout << "El n�mero ingresado no es v�lido" << endl;
		}
	
	}while (medida != 1 & medida != 2);
	
	
	system("pause");
	return 0;
}
