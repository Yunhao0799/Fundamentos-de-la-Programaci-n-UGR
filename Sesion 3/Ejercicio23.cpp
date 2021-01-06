/*
Construya un programa que lea desde teclado tres variables correspondientes a un número de horas, 
minutos y segundos, respectivamente. A continuación, el programa debe calcular las horas, minutos 
y segundos dentro de su rango correspondiente. Por ejemplo, dadas 312 horas, 119 minutos y 1291 
segundos, debería dar como resultado 13 días, 2 horas, 20 minutos y 31 segundos. El programa no 
calculará meses, años, etc. sino que se quedará en los días. Como consejo, utilice el operador / 
que cuando trabaja sobre datos enteros, obtiene la división entera. Para calcular el resto de la 
división entera, use el operador %. Ejemplo de entrada: 312 119 1291--Salida correcta: 13 2 20 31
*/

#include<iostream>

using namespace std;

int main(){
	const int N = 60;
	const int D = 24;
	int horas, mins, s, dias;
	
	cout << "Introduzcame las horas, los minutos y los segundos \n";
	cin >> horas; 
	cin >> mins;
	cin >> s;
	
	if(s >= N){
		mins += s/N;
		s = s%N;
	}
	
	if(mins >= N){
		horas += mins/N;
		mins = mins%N;
	}
	
	if(horas >= D){
		dias = horas/D;
		horas = horas%D;
	}
	
	cout << dias << " dias " << horas << " horas " << mins << " minutos " << s << " segundos\n"; 
} 
