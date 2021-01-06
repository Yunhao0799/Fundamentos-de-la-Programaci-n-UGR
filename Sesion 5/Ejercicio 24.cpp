//Yunhao Lin

#include <iostream>

using namespace std;

int main(){
	const int INTENTOS = 3;
	int minimo, maximo, nuevo, i = 0;
	bool sobrepasado = false;
	
	//filtros
	cout << "Introduzca minimo \n";
	cin >> minimo;
	while(minimo < 0){
		cout  << "Introduzca minimo \n";
		cin >> minimo;
	}
	cout  << "Introduzca maximo \n";
	cin >> maximo;
	while(maximo < minimo){
		cout  << "Introduzca maximo \n";
		cin >> maximo;
	}
	cout << "Introduzca un entero \n";
	cin >> nuevo;
	while(!(nuevo <= maximo && nuevo >= minimo) && i < INTENTOS - 1){
		if(i >= INTENTOS - 1)
			sobrepasado = true;
		cout  << "Introduzca entero \n";
		cin >> nuevo;
		i++;
	}
	
	if (sobrepasado)
		cout << "Numero de intentos sobrepasado \n ";
	else
		cout << nuevo - minimo << "	" << maximo - nuevo;
}
