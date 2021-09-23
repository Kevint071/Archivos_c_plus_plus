#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int medida;
	float base_mayor;
	float base_menor;
	float altura;
	char metros [18]=" metros cuadrados";
	char centimetros[23]=" cent�metros cuadrados";
	
	do {
		cout << "Digite la medida que va a usar 1(m), 2(cm): " << endl;
		cin >> medida;
					
		if (medida == 1){
			do{
			cout << "Digite la base mayor del trapecio en metros: " << endl;
			cin >> base_mayor;
			if(base_mayor <= 0){
			cout << "El n�mero no es v�lido" << endl;
			}
			} while(base_mayor <= 0);
			
			do{
			cout << "Digite la base menor del trapecio en metros: " << endl;
			cin >> base_menor;
			if(base_menor <= 0){
			cout << "El n�mero no es v�lido" << endl;
			}
			} while(base_menor <= 0);
			
			do{
			cout << "Digite la altura del triapecio en metros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El n�mero no es v�lido" << endl;
			}
			} while(altura <= 0);
			system("cls");
			cout << "Figura: Trapecio \n" << endl;
			cout << "El �rea del trapecio es: " << (base_mayor * base_menor * altura)/2 << metros << endl;
		}	
		
		else if (medida == 2){
			do{
			cout << "Digite la base mayor del trapecio en cent�metros: " << endl;
			cin >> base_mayor;
			if(base_mayor <= 0){
			cout << "El n�mero no es v�lido" << endl;
			}
			} while(base_mayor <= 0);
			
			do{
			cout << "Digite la base menor del trapecio en cent�metros: " << endl;
			cin >> base_menor;
			if(base_menor <= 0){
			cout << "El n�mero no es v�lido" << endl;
			}
			} while(base_menor <= 0);
			
			do{
			cout << "Digite la altura del triapecio en cent�metros: " << endl;
			cin >> altura;
			if(altura <= 0){
			cout << "El n�mero no es v�lido" << endl;
			}
			} while(altura <= 0);
			system("cls");
			cout << "Figura: Trapecio \n" << endl;
			cout << "El �rea del trapecio es: " << (base_mayor * base_menor * altura)/2 << centimetros << endl;
		}
				
		else{
			cout << "El n�mero ingresado no es v�lido" << endl;
		}
	
	}while (medida != 1 & medida != 2);
	
	cout << "\n";
	
	cout << "Nombre: Kevin Andr�s Torrecilla Mart�nez";
	return 0;
}
