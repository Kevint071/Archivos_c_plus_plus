#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <locale.h>
#include <string>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	int Ref;
	
	cout << "Digite un n�mero"<< endl << "\n";
	cin >> Ref;
	
	cout << Ref;
}
