#include<iostream>
#include<math.h>

using namespace std;

struct CoordenadasPunto2D{
	float x, y;
};

float distanciaEuclidea(CoordenadasPunto2D punto1, CoordenadasPunto2D punto2){
	return sqrt(pow((punto2.x - punto1.x), 2) + pow((punto2.x - punto1.x), 2));
}

class Circunferencia{
	private:
		CoordenadasPunto2D centro;
		const float PI = 3.14159265;
		float r;
		
	public:
		Circunferencia(){
		}
		
		Circunferencia(CoordenadasPunto2D p, float r){
			this -> centro = p;
			this -> r = r;
		}
		
		float longitud(){
			return 2 * PI * r;
		}
		
		float area(){
			return PI * pow(r, 2);
		}
		
		bool pertenece(CoordenadasPunto2D p){
			int n = pow(centro.x - p.x, 2) + pow(centro.y - p.y, 2);
			return n <= pow(r, 2);
		}
};

int main(){
	/*
	CoordenadasPunto2D p1, p2;
	char op;
	do{
		do{
			cout << "Quiere continuar? S o N \n";
			cin >> op;	
		}while(op != 'n' && op != 's');
		cin >> p1.x >> p1.y;
		cin >> p2.x >> p2.y;
		cout << distanciaEuclidea(p1, p2) << " \n";
	}while(op != 'n');*/
	
	CoordenadasPunto2D centro, otro;
	float radio;
	cin >> centro.x >> centro.y >> radio >> otro.x >> otro.y;
	
	Circunferencia c(centro, radio);
	cout << c.area() << " " << c.longitud() << " ";
	if(c.pertenece(otro))
		cout << "El punto esta dentro";
	else 
		cout << "El punto no esta dentro";
}
