#include <iostream>
using namespace std;
#define PI 3.1416 //dar un valor a pi de forma global

int main() {
    float radianes = 0.0174533, grados;  //declaracion de variables
    
    printf("el numero en radianes es: %f ", radianes); //mostrar el numero que se va a convertir
    
    grados = radianes*(180/PI); //operacion para convertir de radianes a grados
    
    printf("el numero en grados es: %f", grados); //mostrar el resultado en grados
    
	return 0;
}
