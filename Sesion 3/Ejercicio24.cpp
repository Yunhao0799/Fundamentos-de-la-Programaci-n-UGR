/*
Se quiere generalizar elejercicio 7 que intercambiabael valor dedos variables al caso de tres 
variables. Construya un programa que declare las variables x, y y z, lea su valor desde teclado 
e intercambien entre sí sus valores de forma que el valor de x pasa a y, el de y pasa a z y el 
valor de z pasa a x (se pueden declarar variables auxiliares aunque se pide que se use el menor 
número posible). Ejemplo de entrada: 7 4 5--Salida correcta: 5 7 4
*/

#include <iostream>

using namespace std;

int main(){
	int x, y, z, aux, aux2;
	
	cout << "Introduzca x, y, z en ese orden \n";
	cin >> x;
	cin >> y;
	cin >> z;
	
	aux = x;
	x = z;
	aux2 = y;
	y = aux;
	z = aux2;
	
	
	cout << x << "	" << y << "	" << z;
}
