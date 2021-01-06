/*
 Cree un programa que lea el número de un año e indique si es bisiesto o no. Un año es bisiesto si es múltiplo de cuatro, 
 pero no de cien. Excepción a la regla anterior son los múltiplos de cuatrocientos que siempre son bisiestos. Por ejemplo, 
 son bisiestos: 1600,1996, 2000, 2004. No son bisiestos: 1700, 1800, 1900, 1998, 2002. 
 
 salida: 0 si no es bisiesto, 1 si lo es
 */
 
#include<iostream>

using namespace std;

int main(){
	bool bisiesto;
	int anio;
	
	cout << "Introduzcame el anio \n";
	cin >> anio;
	
	bisiesto = ((anio%4 == 0 && anio%100 != 0) || anio%400 == 0);
	
	cout << bisiesto;
}
