/*
Escriba un programa en C++ para que lea tres enteros desde teclado y nos diga si est�n ordenados 
(da igual si es de forma ascendente o descendente) o no lo est�n. Por ejemplo, la sucesi�n de n�meros 
3, 6, 9 estar�a ordenada as� como la serie 13, 2, 1 pero no lo estar�a la serie 3, 9, 5. 

 Modi?que el ejercicio 7 para que el programa nos diga si los tres valores le�dos est�n ordenados de 
 forma ascendente, ordenados de forma descendente o no est�n ordenados. Para resolver este problema, 
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
