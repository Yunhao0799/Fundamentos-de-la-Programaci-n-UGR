/*
 Construya un programa que lea un car�cter (supondremos que el usuario introduce una may�scula), 
 lo pase a min�scula y lo imprima en pantalla. H�galo sin usar las funcionestouppernitolowerdela
 bibliotecacctype.Paraello,debeconsiderarse la relaci�n que hay en C++ entre los tipos enteros y 
 caracteres.
 Ejemplo de entrada: D--Salida correcta: d
 */

#include<iostream>

using namespace std;

int main(){
	char caracter;
	const int LETRAS_ABECEDARIO = 26;
	
	cout << "Introduzcame una mayuscula \n";
	cin >> caracter;
	
	caracter += 6 + LETRAS_ABECEDARIO;
	
	cout << caracter;
}
