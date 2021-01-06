/* 
pinta digitos generalizado
*/

#include <iostream>
#include<cmath>

using namespace std;

int main(){
	int numero, ndigi;
	double digitos;
	
	cout << "Digame un numero \n";
	cin >> numero;
	
	
	digitos = numero;
	ndigi = 0;
	while((digitos - 1) > 0){
		digitos = digitos/10;
		ndigi++;
	}
	
	int multiplicador = pow(10, ndigi - 1);
	for(int i = 0; i < ndigi; i++){
		int resultado = int(numero/multiplicador);
		cout << resultado << "	";
		int numero2 = (numero%multiplicador);
		numero = numero2;
		multiplicador = multiplicador/10;
	}
}
