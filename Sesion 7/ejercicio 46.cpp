#include <iostream>

using namespace std;

int main(){
	int t, suma = 0, factorial = 1;
	
	cout << "leer t" << endl;
	cin >> t;
	
	for(int i = 1; i <= t; i++){
		for(int j = i; j > 0; j--)
			factorial *= j;
		
		suma += factorial;
		factorial = 1;
	}
	
	cout << suma;
}
