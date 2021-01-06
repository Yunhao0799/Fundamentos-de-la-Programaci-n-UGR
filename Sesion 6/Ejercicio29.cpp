#include <iostream>
using namespace std;

int main(){
    double temperatura, anterior;
    const int CENTINELA = -1;
    int contador = 0;
    int inicio = 0;
    int inicio_max = 1;
    int longitud = 0;
    int longitud_max = 1;
    bool continua = false;


    cout << "Introduzca la temperatura: ";
    cin >> temperatura;
    while(temperatura != CENTINELA){
        anterior = temperatura;
        cin >> temperatura;
        contador++;
        if(anterior < temperatura){
            if(continua){
                longitud++;

            }else{
                inicio = contador;
                longitud++;
                continua = true;
            }
        }else continua = false;
        if(longitud >= longitud_max){
            inicio_max = inicio;
            longitud_max = longitud;
        }
    }
    cout << "La mayor racha empieza en " << inicio_max << " y tiene una longitud de " << longitud_max << endl;
}