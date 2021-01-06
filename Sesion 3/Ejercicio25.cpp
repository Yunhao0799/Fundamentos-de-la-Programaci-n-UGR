/*
 Construya un programa que lea un carácter (supondremos que el usuario introduce una mayúscula), 
 lo pase a minúscula y lo imprima en pantalla. Hágalo sin usar las funcionestouppernitolowerdela
 bibliotecacctype.Paraello,debeconsiderarse la relación que hay en C++ entre los tipos enteros y 
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
