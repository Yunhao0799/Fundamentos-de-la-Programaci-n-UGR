#include<iostream>
#include<fstream>
#include <clocale>


using namespace std;

//std::setlocale(LC_ALL, "es_ES");

struct FrecuenciaCaracter{
	char caracter;
	int frecuencia = 0;
};
int main(){
	//setlocale(LC_ALL, "es_ES");
	ifstream archivo("quijote.txt");
	FrecuenciaCaracter abc[27];
	char ene = 'ñ';
	abc[26].caracter = char(164);
	int pos = 0;
	for(int i = 'a'; i <= 'z'; i++){
		abc[pos].caracter = i;
		pos++; 
	}
	
	char temporal;
	if(archivo){
		do{
			temporal = archivo.get();
			if(temporal != ene)
				temporal = tolower(temporal);
			//	int aux;
			//	aux=temporal;
			//cout << aux << "		";
			//cout << temporal;
			if(temporal >= 'a' && temporal <= 'z' || temporal == ene){
				if(temporal >= 'a' && temporal <= 'z')
					abc[temporal - 'a'].frecuencia++;
				else{
					abc[26].frecuencia++;
					//cout << temporal ;
				}
				
					
			}
		}while(!archivo.eof() && temporal != '#');
	}
	else{
		cout << "No se pudo abrir \n";
		return 0;
	} 
	
	cout << endl;
	int max = 0, pos_max;
	for(int i = 0; i < 27; i++){
		cout << "Caracter: " << abc[i].caracter << " frecuencia " << abc[i].frecuencia << endl;
		if(abc[i].frecuencia > max){
			max = abc[i].frecuencia;
			pos_max = i;
		}
	}
	//cout << "Caracter que sale mas veces: " << abc[pos_max].caracter; 
	
	//cout << char(-15);
		
}
