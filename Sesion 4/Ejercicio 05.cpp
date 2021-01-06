/*
Queremos gestionar la n�mina de los empleados de un centro de atenci�n telef�nica. Construya un programa 
que lea el salario por hora (dato de tipo real) de un empleado, el n�mero de horas trabajadas durante el 
mes actual (dato de tipo entero) el n�mero de casos resueltos de forma satisfactoria (dato de tipo entero)
y el grado medio de satisfacci�n de los usuarios de los servicios telef�nicos con el empleado en cuesti�n 
(real entre 0 y 5). Se quiere aplicar una subida salarial en funci�n de varios factores. En ejercicios 
sucesivosseir�nplanteandodistintasposibilidades.Laprimeraquesequiereimplementar es la siguiente: Se 
aplicar� una subida del 4% a los empleados que han resuelto m�s de 30 casos.
M�s de 30 casos resueltos: +4%
Imprima el salario ?nal en pantalla. 
Ejemplo de entrada: 8.5 150 32 5--Salida correcta: 1326 
Ejemplo de entrada: 7.5 130 24 3--Salida correcta: 975
*/

#include<iostream>

using namespace std;

int main(){
	float salario_hora, salario_final;
	int horas_trabajadas;
	int casos_resueltos;
	double grado_sastifaccion;
	
	cout << "Introduzca en el siguiente orden salario por hora, horas trabajadas, casos resueltos y la valoracion media \n";
	cin >> salario_hora;
	cin >> horas_trabajadas;
	cin >> casos_resueltos;
	cin >> grado_sastifaccion;
	
	salario_final = salario_hora;
	
	if( casos_resueltos > 30)
		salario_final = salario_final * 1.04 * horas_trabajadas;
		
	
	cout << endl;	
	cout << salario_final << endl;
}
