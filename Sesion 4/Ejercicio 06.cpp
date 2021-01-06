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


 Recuperelasoluci�ndelejercicio5sobreelc�mputodelan�minadelostrabajadores de un centro de atenci�n telef�nica. 
 Implemente ahora el siguiente criterio para la subida salarial. Se aplicar� una subida del 4% a los empleados 
 que han resuelto m�s de 30 casos y una subida del 2% si el grado de satisfacci�n media de los usuarios es mayor 
 o igual que 4.0. Ambas subidas son compatibles, es decir, si un trabajador cumple las dos condiciones, se le 
 aplicar�n ambas subidas. Resuelva este ejercicio considerando que la nueva subida del 2% se realiza sobre el 
 salario inicial y no sobre el resultado de haber aplicado, en su caso, la otra subida del 4%.
M�s de 30 casos resueltos: +4% 
Grado de satisfacci�n >= 4: +2%

Ejemplo de entrada: 8.5 150 32 5--Salida correcta: 1351.5 
Ejemplo de entrada: 8.5 150 29 5--Salida correcta: 1300.5 
Ejemplo de entrada: 7.5 130 24 3--Salida correcta: 975


*/

#include<iostream>
#include<iomanip>

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
	

	if( casos_resueltos > 30){
		if(grado_sastifaccion > 4.0)
			salario_final *= 1.02;
		salario_final *= 1.04;
	}
		
	salario_final *= horas_trabajadas;
	
	cout << endl;	
	cout << salario_final << endl;
}
