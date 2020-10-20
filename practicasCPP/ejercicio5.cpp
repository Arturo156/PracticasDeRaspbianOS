#include <iostream>
using namespace std;

int main() {
    float sueldo = 4.50, sueldo2 = 6.75; //declaracion de variables
    float horas = 40, horas_extras = 13, h, total; //declaracion de variables
    
    h = horas + horas_extras; //sumar las horas trabajadas
    
    printf("horas trabajadas totales: %f \n", h); //mostrar en pantalla las horas trabajadas
    
    total = (sueldo*horas)+(sueldo2*horas_extras); //calcular el total del sueldo
    
    printf("sueldo total: %f \n", total); //mostrar resultado
    
	return 0;
}
