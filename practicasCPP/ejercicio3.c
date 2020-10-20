#include <iostream>
using namespace std;

int main() {
    int pago_por_hora = 20, pago_por_hora_extra = 40; //declaracion de variables
    int horas_trabajas = 50, horas_trabajadas_extra = 5; //declaracion de variables
    int sueldo_global, x, y; //declaracion de variables
    
    printf("horas trabajas en la semana: %i \n", horas_trabajas); //mostrar las horas normales y extras
    printf("horas extra trabajadas en la semana: %i \n", horas_trabajadas_extra); 

    //operaciones
    x = horas_trabajas*pago_por_hora; 
    y = horas_trabajadas_extra*pago_por_hora_extra; 
    sueldo_global = x + y; 
    
    printf("sueldo global (Horas normales mas Horas extra): %i", sueldo_global); //sueldo total
    
	return 0;
}
