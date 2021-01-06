//////////////////////////////////////////////////////////////////////////
//
// Fundamentos de Programación
// ETS Informática y Telecomunicaciones
// Universidad de Granada
// Departamento de Ciencias de la Computación e Inteligencia Artificial
// Autor: Juan Carlos Cubero
//
//////////////////////////////////////////////////////////////////////////

// Gaussiana con funciones (incluida CDF)

/*	 
Retome la solución del ejercicio 48 (Gaussiana) y modifíquela introduciendo funcio-
nes dónde crea conveniente. Al menos debe definir la función gaussiana para que
calcule el valor de la ordenada, para unos valores concretos de abscisa, esperanza y
desviación.
*/

#include <iostream>
#include <cctype>
#include <cmath>

const double PI = 3.1415927;   // Global por si la necesitamos en otras funciones

using namespace std;

// -----------------------------------------------------------------------
double LeeDoubleMayorIgualQue(double minimo, string mensaje){
   cin >> mensaje;
   double a_leer;

   do{
      cout << mensaje;
      cin >> a_leer;
   }while (minimo > a_leer);

   return a_leer;
}

// -----------------------------------------------------------------------
//	Potencia de un número elevado a un entero.
double Potencia(double la_base, int el_exponente){
	// Observad que si exponente fuese cero, la variable potencia se quedaría con 1,
	// lo que es correcto ya que base elevado a 0 es siempre 1

	double potencia;
	int exponente_positivo;

	if (la_base == 0 && el_exponente == 0)
		potencia = NAN;
	else{
		exponente_positivo = abs(el_exponente);
		potencia = 1;

		for (int i = 1; i <= exponente_positivo; i++)
			potencia = potencia * la_base;
	}

	if (el_exponente < 0)
		potencia = 1/potencia;

	return potencia;
}

/*
	Aunque es este ejemplo la única función que necesita conocer PI
   es la función EvaluaGaussiana, hemos optado por ponerla como
   una constante global ya que es de esperar que se añadan otras funciones
   que también necesiten conocer el valor de PI
*/

/*
	Jamás escribiremos una función en la que, dentro de ella,
	se hagan a la misma vez E/S y Cómputos.
	Al hacerlo, estamos obligando a calcular siempre la gaussiana
	leyendo los datos con cin, pero éstos podrían venir de cualquier otra forma.
*/
/*
double GaussianaSUSPENSO(){
	double abscisa, ordenada, esperanza, desviacion;

   // Jamás incluiremos las siguientes sentencias de entrada de datos
   // en esta función que lo que hace es realizar un cómputo
   // (la evaluación de la función en un punto)

	cout << "\nIntroduzca el valor del parámetro 'esperanza' : ";
	cin >> esperanza;                                               // :-(
	cout << "\nIntroduzca el valor del parámetro 'desviacion' : ";
	cin >> desviacion;                                              // :-(
	cout << "\nIntroduzca el valor de la abscisa: ";
	cin >> abscisa;                                                 // :-(

	ordenada = exp(-(pow( (abscisa - esperanza)/desviacion  ,  2)) / 2) /
	          (desviacion * sqrt(2*PI));

	return ordenada;
}

int main(){
	double ordenada;

	ordenada = Gaussiana();   // :-(
	cout << "\n\nEl valor de la función gaussiana  es " << ordenada;

	cout << "\n\n";
   system("pause");
}
*/

// -----------------------------------------------------------------------
// Valor de la función Gaussiana (o "Normal") en un punto x


/*

   Para calcular el área hasta x, la aproximación que vamos a usar
   necesita saber x y el valor de la gaussiana en ese punto, es decir,
   gaussiana(x) o tal y como la hemos llamado EvaluaGaussiana(x)

   ¿Calculamos ese valor en el main y lo pasamos como parámetro?

   double AreaHastaGaussiana(
         double x,
         double valor_en_x){
      
   	const double b0 = 0.2316419, b1 = 0.319381530, b2 = -0.356563782,
   		          b3 = 1.781477937, b4 = -1.821255978, b5 = 1.330274429;
   	double area_hasta;
   	double t;

   	t = 1 / (1 + b0 * x);
   	area_hasta = 1 -  valor_en_x
   							*
   							(b1*t + b2*Potencia(t,2) + b3*Potencia(t,3) +
                         b4*Potencia(t,4) + b5*Potencia(t,5));

   	return area_hasta;
   }

   La respuesta es que no.
   En caso de hacerlo así, tendríamos dos problemas:

   1. Siempre tendríamos que realizar la misma acción antes de llamar
      a la función AreaHasta, por lo que eso es repetir código
   2. Si pasamos un valor incorrectamente calculado, la función
      AreaHasta no tiene forma de saberlo, por lo que devolvería basura

   Este tipo de diseños incorrectos se detectan fácilmente porque
   hay una dependencia obvia entre los parámetros.
   Si pasamos un valor concreto del parámetro x, estamos obligados a pasar
   otro valor concreto del otro parámetro valor_en_x,
   es decir, valor_en_x depende obviamente de x.

   Dicho de otra forma, los parámetros deberían poder variar libremente
   sin que unos afectasen a otros.

   A la función AreaHasta le pasamos los datos básicos para que ella
   realice las tareas que tiene que resolver -> el valor de x y los
   parámetros que determinan la distribución gaussiana
   (esperanza y desviación).
*/

// -----------------------------------------------------------------------
// Área hasta x que queda por debajo de la Gaussiana


bool Menu2OpcionesContinuarSalir(string mensaje,
                                char opcion_salir,
                                char opcion_seguir){
   char opcion_menu;
   bool eligio_salir, es_correcta_opcion;
   
   cout << mensaje;
   
   do{
      cout << "\nIntroduzca la opción (" << opcion_seguir
           << "/" << opcion_salir << ") ";
      cin >> opcion_menu;
      opcion_menu = toupper(opcion_menu);
      eligio_salir = opcion_menu == opcion_salir;
      es_correcta_opcion = eligio_salir || opcion_menu == opcion_seguir;
   }while (! es_correcta_opcion);
   
   return eligio_salir;
}

class gaussiana{
	private:
		float esperanza, desviacion;
	
	public:
		gaussiana(float esperanza, float desviacion){
			this -> esperanza = esperanza;
			this -> desviacion = desviacion;
		}
		
		double AreaHastaGaussiana(double x){
			// Aproximación dada por Zelen & Severo (1964)
			// -ver Wikipedia (Normal distribution) para otras aproximaciones-
			const double b0 = 0.2316419, b1 = 0.319381530, b2 = -0.356563782,
				          b3 = 1.781477937, b4 = -1.821255978, b5 = 1.330274429;
			double area_hasta;
			double t;
		
			t = 1 / (1 + b0 * x);
			area_hasta = 1 -  EvaluaGaussiana( x)
									*
									(b1*t + b2*Potencia(t,2) + b3*Potencia(t,3) +
		                      b4*Potencia(t,4) + b5*Potencia(t,5));
		
			return area_hasta;
		}
		
		double EvaluaGaussiana(double x){
		    double valor_tipificado, exponente;
			double ordenada;
			
			valor_tipificado = (x - esperanza) / desviacion;
		    exponente = -0.5 * valor_tipificado * valor_tipificado;
		    ordenada = exp(exponente) / ( desviacion * sqrt(2*PI) );
		
			return ordenada;
		}
};
      
// -----------------------------------------------------------------------
int main(){
	/*
		Como norma general no usaremos nombres de variables como x, y, etc.
		Hacemos una excepción en este programa ya que son nombres
      omnipresentes en Matemáticas.
	*/
	
	/*
	(P)arámetros  -> [cin esperanza y desviación] -> (R)ango -> [cin min, max, incremento] -> Resultados ->|
	(S)alir       <--------------------------------- (V)olver <--------------------------------------------|	
	*/
	/*
	do{
	  Mostrar Menú Ppal (Parámetros o Salir)
	  Leer opcion_menu_ppal
	  
	  if opcion_ppal no es Salir
	     Lectura de esperanza y desviación
	     
	     do{
	        Mostrar Menú (Rango o Volver)
	        Leer opcion_menu_secundario
	        
	        if opcion_menu_secundario no es Volver
	           Lectura de min, max e incremento
	           Mostrar resultados
        }while (opcion_menu_secundario != 'V')
   }while (opcion_ppal != 'S')
   */       
   const char OPCION_INTRO_PARAMETROS = 'P',
              OPCION_SALIR = 'S',
              OPCION_INTRO_RANGO = 'R',
              OPCION_VOLVER = 'V';
   bool eligio_salir_ppal, eligio_salir_secundario;
	
	const string
      MSJ_MENU_PPAL =
	   "\n\n---------------------\nMenú Principal\n\nParámetros\nSalir\n",
	   MSJ_MENU_SECUNDARIO =
	   "\n\nMenú Secundario\n\nRango\nVolver\n",
      MSJ_INTRO_ESPERANZA =
      "\nIntroduzca el valor del parámetro 'esperanza': ",
      MSJ_INTRO_DESVIACION =
      "\nIntroduzca el valor del parámetro 'desviacion'. Debe ser un número positivo: ",
      MSJ_INTRO_MINIMO =
      "\nIntroduzca el valor mínimo de la abscisa: ",
      MSJ_INTRO_MAXIMO =
      "\nIntroduzca el valor máximo de la abscisa. Debe ser un número positivo: ",
      MSJ_INTRO_INCREMENTO =
      "\nIntroduzca el valor del incremento. Debe ser un número positivo: ";
      
	double esperanza, desviacion, x, min_x, max_x, incremento;
	double y, cdf;
	
   cout << "Gaussiana";
   
   do{
      eligio_salir_ppal = Menu2OpcionesContinuarSalir(
                                                MSJ_MENU_PPAL,
                                                OPCION_SALIR,
                                                OPCION_INTRO_PARAMETROS);
      
      if (! eligio_salir_ppal){
         cout << MSJ_INTRO_ESPERANZA;
      	cin >> esperanza;
         desviacion = LeeDoubleMayorIgualQue(0, MSJ_INTRO_DESVIACION);
         gaussiana instancia(esperanza, desviacion);
         do{
            eligio_salir_secundario = Menu2OpcionesContinuarSalir(
                                                      MSJ_MENU_SECUNDARIO,
                                                      OPCION_VOLVER,
                                                      OPCION_INTRO_RANGO);
            
            if (! eligio_salir_secundario){
               cout << MSJ_INTRO_MINIMO;
            	cin >> min_x;
            	max_x      = LeeDoubleMayorIgualQue(min_x, MSJ_INTRO_MAXIMO);
               incremento = LeeDoubleMayorIgualQue(0, MSJ_INTRO_INCREMENTO);
               
               for(x = min_x; x <= max_x; x = x + incremento)  {            
                  y   = instancia.EvaluaGaussiana(x);
                  cdf = instancia.AreaHastaGaussiana(x);
                  
                  cout << "\nf(" << x << ")= " << y;
                  cout << "\n\t\t\tCDF(" << x << ")= " << cdf;}
               
            }
         }while (! eligio_salir_secundario);
      }
   }while (! eligio_salir_ppal);
}
