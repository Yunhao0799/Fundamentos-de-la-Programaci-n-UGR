/*
 La tabla para el cálculo del precio a pagar en los parkings de Madrid para el 2015 es la siguiente: 
 Si permanece más de 660 minutos se paga una única tarifa de 31.55 euros 
 Desde el minuto 0 al 30: 0.0412 euros cada minuto 
 Desde el minuto 31 al 90: 0.0370 euros cada minuto 
 Desde el minuto 91 al 120: 0.0311 euros cada minuto 
 Desde el minuto 121 al 660: 0.0305 euros cada minuto
 Dado un tiempo de entrada (hora, minuto y segundo) y un tiempo de salida, construya unprograma que 
 calculelatarifa?nalacobrar.Paracalcularelnúmerodeminutosentre los dos instantes de tiempo, puede 
 utilizar la solución del ejercicio 6 de la Relación de Problemas I. 
 Ejemplo de entrada: 2 1 30 2 1 29--Salida correcta: -1 
 Ejemplo de entrada: 2 1 30 2 1 31--Salida correcta: 0 
 Ejemplo de entrada: 2 1 30 2 2 31--Salida correcta: 0.0412 
 Ejemplo de entrada: 2 1 30 2 41 31 --Salida correcta: 1.606 
 Ejemplo de entrada: 2 1 30 3 41 31--Salida correcta: 3.767 
 Ejemplo de entrada: 2 1 30 5 41 31--Salida correcta: 7.439 
 Ejemplo de entrada: 2 1 30 23 1 1--Salida correcta: 31.55 
 
*/

#include<iostream>

using namespace std;

int main(){
	const int TIME = 60; 	
	const double A = 0.0412, B = 0.0370, C = 0.0311, D = 0.0305, E = 31.55; //Donde A, B, C, D denoto distintos tipos 
																// de tarifa	
	double h_ini, m_ini, s_ini, h_f, m_f, s_f, minutos_ini, minutos_final, minutos, coste;
	
	cout << "Hora inicial \n";
	cin >> h_ini;
	cout << "Minutos inicial \n";
	cin >> m_ini;
	cout << "segundos inicial \n";
	cin >> s_ini;
	cout << "Hora fianl \n";
	cin >> h_f;
	cout << "Minuto final \n";
	cin >> m_f;
	cout << "Segundos final \n";
	cin >> s_f;
	
	minutos_ini = h_ini * TIME + m_ini + s_ini/TIME;
	minutos_final = h_f * TIME + m_f + s_f/TIME;
	minutos = minutos_final - minutos_ini;
	
	
	if(minutos <= 0)
		coste = -1;
	else if(minutos < 1)
		coste = 0;
	else if(minutos <= 30)
		coste = A * minutos;
	else if(minutos <= 90)
		coste = minutos * B;
	else if(minutos <= 120)
		coste = minutos * C;
	else if(minutos <= 660)
		coste = minutos * D;
	else 
		coste = E;
		
	cout << endl;
	cout << "Tiempo aparcado: " << minutos;
	cout << endl;
	cout << "Coste: ";
	cout << coste;
	
}
