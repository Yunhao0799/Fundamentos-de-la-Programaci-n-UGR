/*
Funcion gaussiana
*/

#include <iostream>
#include<cmath>

using namespace std;

int main(){
	double mean, sd, minimo, maximo, incremento, base, salida, minb;
	const double PI = 3.1416;
	
	//Lctura datos
	cout << "Introduzca la media " << endl;
	cin >> mean;
	cout << "Introduzca la desviacion tipica \n";
	cin >> sd;
	while(!(sd >= 0)){
		cout << "Introduzca la desviacion tipica \n";
		cin >> sd;
	}
	cout << "Introduzca minimo \n";
	cin >> minimo;
	cout  << "Introduzca maximo \n";
	cin >> maximo;
	while(maximo < minimo){
		cout  << "Introduzca maximo \n";
		cin >> maximo;
	}
	cout << "Introduzca incremento \n";
	cin >> incremento;
	
	
	
	//computo y salida
	minb = minimo;
	int i = 0;
	while(i < maximo){
		minimo = minb;
		minimo = minimo + i*incremento;
		base = ((minimo - mean)/ sd);
		salida = (exp( (-0.5) * (pow(base, 2))))/ (sd * sqrt(2 * PI));
		cout << salida << "		";
		i++;
	}
	
} 
