#include <iostream>
#include<math.h>

//@yunhao lin

using namespace std;

int main(){
	bool no = true;
	int n, i, j;
	cout << "dime el numero" << endl;
	cin >> n;
	
	for(i = 0; i < n/2 && no; i++){
		if(pow(2, i) == n)
			no = false;
	}
	
	if(!no){
		cout << "0 descomposisicones" << endl;
	}
	else{
		    
		    int suma, aux;
		    bool encontrado = false;
		    
		    for(i = 1; i <= n/2; i++){
		    	
		    	//busco si a partir de i existe una secuencia creciente
		    	suma = i;
		    	aux = i + 1;
		    	while(suma != n && aux < n && !encontrado && suma < n){
		    		suma += aux;
		    		aux++;
		    		if(suma == n)
		    			encontrado = true;
				}
				
				//si lo hay, imprimo desde i hasta el ultimo que encuentre
				if(encontrado){
					for(j = i; j < aux; j++){
						cout << j << " ";
					}
					cout << "/ ";
				}
				encontrado = false;
		    	
			}
	  	
	}
	
}
