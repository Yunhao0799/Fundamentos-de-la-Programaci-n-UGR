/*
Escriba una expresión lógica que sea verdadera si una variable de tipo carácter llamada letra es 
una letra minúscula y falso en otro caso. Escriba una expresión lógica que sea verdadera si una 
variable de tipo entero llamada edad es menor de 18 o mayor de 65. Escriba una expresión lógica 
que sea verdadera si una variable de tipo entero llamada adivine está entre 1 y 100. Escribauna
expresiónlógicaqueseaverdaderasiunañoesbisiesto.Losañosbisiestos son aquellos que o bien son 
divisibles por 4 pero no por 100, o bien son divisibles por 400. Escriba un programa que lea las 
variables letra, edad, adivine y anio, calcule el valor de las expresiones lógicas anteriores e 
imprima el resultado. Debe almacenarse el resultado de las expresiones lógicas en variables de 
tipo bool. Tengaencuentaquecuandoseimprimeporpantalla(con cout)unaexpresiónlógica queestrue,se
imprime1.Siesfalse,seimprimeun0.Eneltema2veremoslarazón. 
Ejemplo de entrada: a 30 0 2017--Salida correcta: 1 0 0 0 
Ejemplo de entrada: A 17 30 2000--Salida correcta: 0 1 1 1 
*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	int edad, adivine, anio;
	bool minuscula, anios, acierto, bisiesto;
	
	cout << "Introduzca una letra \n";
	cin >> letra;
	cout << "Introduzca una edad \n";
	cin >> edad;
	cout << "Introduzca un numero entre 1 y 100 \n";
	cin >> adivine;
	cout << "Introduzca un anio \n";
	cin >> anio;
	
	
	minuscula = letra > 96 && letra < 123;
	anios = edad < 18 || edad > 65;
	acierto = adivine > 0 && adivine <= 100;
	bisiesto = ((anio % 4 == 0) && (anio%100 != 0)) || anio%400 == 0;
	
	cout << minuscula << " " << anios << " " << acierto << " " << bisiesto;
		
}
