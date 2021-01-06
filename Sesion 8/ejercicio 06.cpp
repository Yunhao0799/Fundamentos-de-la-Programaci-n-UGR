#include <iostream>

using namespace std;

int LeeIntRango(){
	int t;
	
	do{
		cout << "dime entero \n";
		cin >> t;
	}
	while(!(t > 0 && t <= 20));
	
	return t;
}



/* VERSION 1
int factorial(int n){
	int sal = 1;
	for(int i = n; i > 0; i--)
		sal *= i;
		
	return sal;
}

int sumafactorial(int n){
	int sal = 0;
	for(int i = 1; i <= n; i++)
		sal += factorial(i); 
		
	return sal;
}*/

//segunda version
int sumafactorial(int n){
	int suma = 0, factorial = 1;
	for(int i = 1; i <= n; i++){
		factorial *= i;
		suma += factorial;
	}
	return suma;
}
int main(){
	int t = LeeIntRango();
	int sal = sumafactorial(t);
	cout << sal;
}
