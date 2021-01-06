/*
Escriba un programa en C++ para que lea tres enteros desde teclado y nos diga si están ordenados 
(da igual si es de forma ascendente o descendente) o no lo están. Por ejemplo, la sucesión de números 
3, 6, 9 estaría ordenada así como la serie 13, 2, 1 pero no lo estaría la serie 3, 9, 5. 

 Modi?que el ejercicio 7 para que el programa nos diga si los tres valores leídos están ordenados de 
 forma ascendente, ordenados de forma descendente o no están ordenados. Para resolver este problema, 
 debe usar una variable de tipo enumerado
*/

#include <iostream>

using namespace std;

int main(){
	enum Ordenacion
		{no_ordenado, ordenado};
	int a, b, c;
	
	cout << "Introoduzca tres numeros \n";
	cin >> a;
	cin >> b;
	cin >> c;
	
	Ordenacion orden;
	
	if((a > b && b > c) || (a < b && b < c))
		orden = ordenado;
	else
		orden = no_ordenado;
		
	cout << "0 denota no ordenado, 1 denota ordenado:		Resultado:  " << orden;
		
}
