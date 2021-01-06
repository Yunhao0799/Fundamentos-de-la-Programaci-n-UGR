/*
Funcion gaussiana
*/

#include <iostream>
#include<cmath>

using namespace std;

int menuPrincipal(){
	int n;
	cout << "Pulsa 1 para introducir esperanza y desviacion \n";
	cout << "Pulsa 2 para salir \n";
	cin >> n;
	
	return n;
}

int main(){
	double mean, sd, x, base, salida;
	const double PI = 3.1416;
	
	int op = menuPrincipal;
	if(op == 1){
		cout << "Introduzca la media " << endl;
		cin >> mean;
		cout << "Introduzca la desviacion tipica \n";
		cin >> sd;
	}
	
	cout << "Introduzca el valor de la x \n";
	cin >> x;
	
	base = ((x - mean)/ sd);
	salida = (exp( (-0.5) * (pow(base, 2))))/ (sd * sqrt(2 * PI));
	cout << "Salida " << salida;	
}
