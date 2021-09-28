#include <iostream>
#include <wchar.h>
#include <locale.h>


using namespace std;

int main(){
	
	setlocale(LC_ALL,"");
	
	char x[90] = "Cadena de carácteres, Digite una";
	
	cout << x << endl;
	cin.getline(x, 80);
	
	cout << x << endl;
}
