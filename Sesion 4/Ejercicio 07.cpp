/*
Escriba un programa en C++ para que lea tres enteros desde teclado y nos diga si están ordenados 
(da igual si es de forma ascendente o descendente) o no lo están. Por ejemplo, la sucesión de números 
3, 6, 9 estaría ordenada así como la serie 13, 2, 1 pero no lo estaría la serie 3, 9, 5. 
*/

#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	
	cout << "Introoduzca tres numeros \n";
	cin >> a;
	cin >> b;
	cin >> c;
	
	if((a > b && b > c) || (a < b && b < c))
		cout << "Esta ordenado \n";
	else
		cout << "No esta ordenado \n";
		
}
