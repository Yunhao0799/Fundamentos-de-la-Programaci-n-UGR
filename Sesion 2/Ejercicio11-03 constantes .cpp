/*
Calculo area y longitud circulo
*/

#include <iostream>

using namespace std;

int main (){
	const double PI = 3.1415927;
	double area_circ, long_circ, r;
	
	cout << "Introduzcame la radio \n";
	cin >> r;
	
	area_circ = PI * r * r;
	long_circ = 2 * PI * r;
	
	cout << "Area: " << area_circ << "	Longitud:" << long_circ;

}
