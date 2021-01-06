//Yunhao Lin

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	const int FLAG = -1;
	double salario_hora;
	int empleado, segundos, grado_sastifaccion;
	bool resuelto, mayor1 = false, mayor2 = false;
	int sastifa1 = 0, sastifa2 = 0, sastifa3 = 0, cas1 = 0, cas2 = 0, cas3 = 0;
	double media = 0.0;
	
	//entrada de datos
	int casos = 0;
	
	cout << "Introduzca salario por hora\n";
	cin >> salario_hora;
	cout << "Codigo empleado \n";
	cin >> empleado;
	while(empleado != FLAG)
	{
		cout << "Introduzca segundos \n";
		cin >> segundos;
		cout << "Ha sido resuelta? \n";
		cin >> resuelto;
		cout << "Grado de sastifaccion \n";
		cin >> grado_sastifaccion;
		if(empleado == 1){
			sastifa1 += grado_sastifaccion;
			cas1++;	
		}
		else if(empleado == 2){
			sastifa2 += grado_sastifaccion;
			cas2++;	
		}
		else{
			sastifa3 += grado_sastifaccion;
			cas3++;
		}
			
		casos++;
		cout << "Codigo empleado \n";
		cin >> empleado;
	}
	
	cout << "Cout sale del while" 	;
	if (casos == 0)
		cout << "no se ha introducido casos \n";
	
	//resolucion
	cout << casos << "	";
	mayor1 = ((sastifa1 > sastifa2) && (sastifa2 >= sastifa3));
	mayor2 = ((sastifa2 > sastifa3) && (sastifa3 >= sastifa1));
	
	//salida
	if(mayor1){
		media = sastifa1/cas1;
		cout << "1	" << media;
	}
	else if(mayor2){
		media = sastifa2/cas2;
		cout << "2	" << media;
		}
		else{
		media = sastifa3/cas3;
		cout << "3	" << media;
		}
	
		
	

}
