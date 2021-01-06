/*
Calculo de segundos de dos instantes de un dia
*/

#include <iostream>

using namespace std;

int main (){
	const int HS = 3600; //hora a segundos
	const int MS = 60; // minutos a segundos
	
	int h_ini, m_ini, s_ini, h_f, m_f, s_f, segundos_ini, segundos_final;
	
	cout << "Hora inicial \n";
	cin >> h_ini;
	cout << "Minutos inicial \n";
	cin >> m_ini;
	cout << "segundos inicial \n";
	cin >> s_ini;
	cout << "Hora fianl \n";
	cin >> h_f;
	cout << "Minuto final \n";
	cin >> m_f;
	cout << "Segundos final \n";
	cin >> s_f;
	
	segundos_ini = h_ini * HS + m_ini * MS + s_ini;
	segundos_final = h_f * HS + m_f * MS + s_f;
	
	cout << endl;
	cout << "Ha transcurrido el siguiente lapso de tiempo " << segundos_final - segundos_ini;
}
