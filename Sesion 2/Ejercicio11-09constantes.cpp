/*
Yunhao Lin

Recupere la solución del ejercicio 4 (Subir sueldo usando la variable salario_final) Además de
mostrar el salario con la subida del 2% se quiere mostrar el salario resultante de subirle otro 
3% adicional. Esta segunda subida se realizará sobre el resultado de haber aplicado la primera subida. 
El programa debe mostrar los salarios resultantes (el resultante de la subida del 2% y el resultante 
de las dos subidas consecutivas del 2% y del 3%)
*/


#include <iostream>

using namespace std;

int main(){
	double salario_base;
	double salario_final;
	
	cout << "Introduzca salario base" << endl;
	cin >> salario_base;
	
	salario_base *= 1.02;
	salario_final = salario_base;
	cout << "Subida del 2% " << salario_final << endl;
	
	salario_final *= 1.03;
	cout << "Subida del 3% " << salario_final << endl;

}


