#include<iostream>

using namespace std;

double potencia(double x, int n){
	double salida = x;
	for(int i = 1; i < n; i++)
		salida *= x;
		
	return salida;
}

int factorial(int n){
	int sal = 1;
	for(int j = n; j > 0; j--)
		sal *= j;
	
	return sal;
}

bool esta(int n){
	if(n > 0 && n <= 20)
		return true;
	else return false;
}

int main(){
	int n;
	double x;
	
	do{
		cout << "dime entero " << endl;
		cin >> n;
	}while(!esta(n));
	
	cout << "dime real " << endl;
	cin >> x;
	
	cout << "factorial " << factorial(n) << " potencia " << potencia(x, n);
}


