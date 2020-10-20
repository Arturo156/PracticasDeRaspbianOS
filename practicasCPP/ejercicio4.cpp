#include <iostream>
using namespace std;

int main() {
    int sueldo_primer_trabajo = 10, dias = 30, global, global2; //declaracion de variables
    
    global = sueldo_primer_trabajo*dias; //calcular el primer sueldo
    
    printf("sueldo global del primer trabajo: %i \n", global); //mostrar sueldo del primer trabajo
    
     for (int i=1; i<dias; i++) //ciclo for para simular los dias y sumarlos
    {
        global2 = global2 + i;
    }
    
    printf("sueldo global del segundo trabajo: %i \n", global2); //mostrar sueldo del segundo trabajo
    
	return 0;
}
