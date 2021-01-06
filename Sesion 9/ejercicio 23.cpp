#include <iostream>

using namespace std;


class Recta{
	private:
		double a, b, c;
		
		bool validez(double a, double b){
			bool boolean = false;
			if(a != 0 || b != 0)
				boolean = true;
			
			return boolean;
		}
	public:
		Recta(double a, double b, double c){
			if(validez(a, b)){
				this ->  a = a;
				this -> b = b;
			}
			else cout << "No valido \n";
			this -> c = c;
		}
		
		void setCoeficientes(double a, double b, double c){
			if(validez(a, b)){
				this ->  a = a;
				this -> b = b;
			}
			else cout << "No valido \n";
			
			this -> c = c;
		}
		
		double pendiente(){
			return -(a/b);
		}
		
		double ordenadaY(double x){
			return (-c - x*a)/b;
		}
		
		double ordenadaX(double y){
			return (-c - y*b)/a;
		}
		
		void setA(double n){
			this -> a = n;
		}
		
		void setB(double n){
			this -> b = n;
		}
		
		void setC(double n){
			this -> c = n;
		}
};


int main(){
	Recta a(0, 0, 5);
	
}
