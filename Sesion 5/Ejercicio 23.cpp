/*
Calculo poblacional
*/

#include<iostream>

using namespace std;

int main(){
	const int M = 1000;
	double pini, tnatalidad, tmortalidad, tmigracion, salida, num, salida2 = 0;
	int i;
	
	//input
	cout << "Poblacion inicial \n";
	cin >> pini;
	while(pini < 0){
		cout << "Poblacion inicial \n";
		cin >> pini;
	}
	cout << "Tasa natalidad \n";
	cin >> tnatalidad;
	while(!(tnatalidad > 0 && tnatalidad < 1000)){
		cout << "Tasa natalidad \n";
		cin >> tnatalidad;
	}
	cout << "Tasa mortalidad \n";
	cin >> tmortalidad;
	while(!(tmortalidad > 0 && tmortalidad < 1000)){
		cout << "Tasa mortalidad \n";
		cin >> tmortalidad;
	}
	cout << "Tasa migracion \n";
	cin >> tmigracion;
	while(!(tmigracion > 0 && tmigracion < 1000)){
		cout << "Tasa migracion \n";
		cin >> tmigracion;
	}
	cout << "Numero de anos \n";
	cin >> num;
	
	//computo
	
	salida = pini;
	
	i = 0;
	while(salida < 2*pini){
		salida += salida*tnatalidad/M - salida * tmortalidad/M + salida * tmigracion/M;
		
		if(i == num - 1) //porque esto no me guarda??
			salida2 = salida;
		i++;	
	}
	
	

	


	//salida
	cout << endl;
	cout << salida2 << "	" << i << "	" << salida;	
}
