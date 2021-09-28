#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	
	char sn;
	char Ref[0], Desz[0];
	int Talla;
	unsigned long Costo;
	
	do{
		
		cout << "Desea registrar un zapato s/n: ";
		cin >> sn;
		
		fflush(stdin);
		
		if (sn == 's'){
			
			cout << "Digite la referencia: ";
			cin.getline(Ref, 30);
			
			cout << "Digite una descripción: ";
			cin.getline(Desz, 80);
			
			cout << "Digite la talla: ";
			cin >> Talla;
			
			cout << "Costo: ";
			cin >> Costo;
			
			cout << "\n";
			
			do{
				cout << "Desea registrar otro zapato s/n: ";
				cin >> sn;
				
				fflush(stdin);
				
				if (sn == 's'){
					
					cout << "Digite la referencia: ";
					cin.getline(Ref, 30);
					
					cout << "Digite una descripción: ";
					cin.getline(Desz, 80);
					
					cout << "Digite la talla: ";
					cin >> Talla;
					
					cout << "Costo: ";
					cin >> Costo;
					
					cout << "\n";
				}	
				
				if (sn == 'n'){
					
					cout << "FIN DE LA APLICACIÓN"<< endl;
				}
			}while(sn == 's');
		}	
		
		else if (sn == 'n'){
			
			cout << "FIN DE LA APLICACIÓN"<< endl;
		}
		
		else{
			cout << "Valor no válido" << endl << "\n";
		}
	}while(sn != 's' && sn != 'n');
	
	system("pause");
}
