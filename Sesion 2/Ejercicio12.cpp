/*
Calculo poblacional
*/

#include<iostream>

using namespace std;

int main(){
	const int M = 1000;
	double pini, tnatalidad, tmortalidad, tmigracion, salida;
	 
	
	cout << "Poblacion inicial \n";
	cin >> pini;
	cout << "Tasa natalidad \n";
	cin >> tnatalidad;
	cout << "Tasa mortalidad \n";
	cin >> tmortalidad;
	cout << "Tasa migracion \n";
	cin >> tmigracion;
	
	salida = pini;
	
	for(int i = 0; i < 3; i++)
		salida += salida*tnatalidad/M - salida * tmortalidad/M + salida * tmigracion/M;

	
	cout << endl;
	cout << "Salida: " << salida;	
}
