/*
Yunhao Lin

Construya un programa para leer el valor de una variable salario_base de tipo double, 
la incremente un 2% e imprima el resultado en pantalla. Para realizar este cómputo,
multipliquepor1.02elvalororiginal.Pararesolveresteejerciciotienevarias alternativas:

a) Directamente hacer el cómputo 1.02 * salario_base dentro de la sentencia cout
b) Introducir una variable salario_final, asignarle la expresión anterior y mostrar 
su contenido en la sentencia couT
c) Modi?car la variable original salario_base con el resultado de incrementarla un 2%.
*/


#include <iostream>

using namespace std;

int main(){
	double salario_base;
	double salario_final;
	
	cout << "Introduzca salario base" << endl;
	cin >> salario_base;
	
	salario_base *= 1.02;
	salario_final + salario_base;
	cout << salario_base << endl; 
	cout << salario_final << endl;
	
	//Prefiero personalmente la opcion c que machaca  el resultado final, ahorrandonos variables
	//sin embargo la opcion b s eve mas claro
}


