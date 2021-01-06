//Yunhao Lin 

#include <iostream>

using namespace std;

int main(){
	const int FLAG = -1;
	int inicio, inicio1, mayor = 0, pos = 1, pm, pa;
	double este, antes, n, max;
	
	cout << "Introduzca numeros \n";
	cin >> antes;
	while (antes != FLAG){
		contador = 1;
		cin >> este;
		
		while(antes <= este){
			contador++;
			antes = este;
			cin >> este;
		}
		if(contador > max){
			max = contador;
			pos = 
		}
		/*if(este > antes){
			
			contador++;
			
		}
		else{
			if(contador > max){
				pm = pos + 1;
				max = contador;	
			}
			
			contador = 1;
		}
		pos++;
		antes = este;*/
	}
	
	cout << pm << "	" << max;
}
