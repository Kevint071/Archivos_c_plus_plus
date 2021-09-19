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
			cout << "Digite la base del rectángulo en metros: " << endl;
			cin >> base;
			cout << "Digite la altura del rectángulo en metros: " << endl;
			cin >> altura;
		}
		
		if (medida == 2){
			cout << "Digite la base del rectángulo en centï¿½metros: " << endl;
			cin >> base;
			cout << "Digite la altura del rectángulo en centï¿½metros: " << endl;
			cin >> altura;
		}
	
	}while (medida != 1 & medida != 2);
	
	cout << "El ï¿½rea del rectï¿½ngulo es: " << base * altura << endl;
	
	system("pause");
}
