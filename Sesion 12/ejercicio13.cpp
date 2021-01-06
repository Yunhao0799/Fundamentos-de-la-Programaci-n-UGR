#include<iostream>


using namespace std;


//eliminar bloqeu eficiente
string eliminarEficiente(string hola, int ini, int fin){
	int a_borrar = fin - ini + 1;
	string sal = hola;
	for(int i = fin + 1; i < sal.size(); i++){
		sal[i - a_borrar] = sal[i];
	}
	
	return sal;
}

int main(){
	string hola = "Texto de prueba";
	string sal = eliminarEficiente(hola, 1, 4);
	cout << sal;
	
}
