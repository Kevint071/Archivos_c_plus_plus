#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	
	int i = 1;
	int num;
	
	while(i <= 10){
		
		cout << "Tabla del " << i << endl;
		i += 1;		
	}
	
	cout << "\n";
	
	do{
		
		cout << "Seleccione una tabla de multiplicación: ";
		cin >> num;
		
		cout << "\n";
		
		if (num < 0 | num > 10){
			
			cout << "El número digitado no es válido..." << endl;
			cout << "\n";
		}
		
	}while(num < 0 | num > 10);
	
	while (i <= 20){
		
		cout << num << " * " << i - 10 << " = " << num * (i - 10) << endl;
		i += 1;	
	}
}
