/*
Escriba un programa que lea un valor entero e imprima en pantalla cada uno de sus d�gitos separados por 
dos espacios en blanco. Supondremos que el usuario introduce siempreunenterodetresd�gitos,comoporejemplo 
351.Enestecaso,lasalidaser�a: 3 5 1 

*/

#include <iostream>

using namespace std;

int main(){
	int entero;
	
	cout << "Introduzcame el entero de 3 digitos \n ";
	cin >> entero;
	
	
	cout << (entero/10)/10 << "	" << (entero/10)%10 << "	" << entero%10;
}

