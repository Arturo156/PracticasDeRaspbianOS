#include <iostream>
using namespace std;
#define PI 3.1416 //dar un valor pi de forma global

int main() 
{
 float grados = 15.4; //declaracion de variables
 float radianes; //declaracion de variables
 
 printf("numero en grados: %f \n", grados); //mostrar el numero a convertir
 
 radianes = grados*2*PI/360; //operacion para convertir grados a radianes
 
 printf("convertido a radianes son: %f", radianes); //mostrar el numero convertido
 
 	return 0;
}
