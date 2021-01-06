#include <iostream>
#include <fstream>

using namespace std;

const long long int TAM = 100000;

int main(){
	ifstream archivo;
	double v[TAM], dato, valor_referencia;
	long long int k_valores, pos = 0;
	archivo.open("valores.txt", ios::in);
	if(archivo){ 
	 	archivo >> v[pos];
		while(!archivo.eof() && v[pos] != -1){
			//v[pos] = dato;
			pos++;
			archivo >> v[pos];
		}
		
		/*for(int i = 0; i < pos; i++)
			cout << v[i] << " ";*/
			cout << v[pos - 1];
		cout << "introduce valor referencia \n";
		cin >> valor_referencia;
		cout << "introduce cantidad \n";
		cin >> k_valores;
		float mayores_que[k_valores];
		int rellenos = 0;
		for(long long int i = 0; i < pos + 1; i++){
			if(v[i] > valor_referencia && rellenos < k_valores){
				if(!rellenos){
					mayores_que[rellenos] = v[i];
					rellenos++;
				}
				else{
					//buscamos la posicion a insertar
					bool insertado = 0;
					int posicion_encontrado;
					for(long long int j = 0; j < rellenos && !insertado; j++){
						if(mayores_que[j] > v[i]){
							insertado = 1;
							posicion_encontrado = j;
							rellenos++;
						}
					}
					
					//le hacemos hueco desplazando el vector a la derecha
					for(long long int j = rellenos; j > posicion_encontrado; j--){
						mayores_que[j] = mayores_que[j - 1];
					}
					
					mayores_que[posicion_encontrado] = v[i];
						
				}
				
			}
		}
		
		for(long long int i = 0; i < rellenos; i++)
			cout << mayores_que[i] << " ";
	}
	else{
		cout << "Error abriendo  \n";
		return 0;
	}
	
	//
	
}
