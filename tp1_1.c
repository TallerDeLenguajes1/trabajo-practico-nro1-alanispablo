/*
 ============================================================================
 Name        : tp1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <conio.h>
#include <stdio.h>

int main(){

	int variable = 7;
	int *puntero = &variable;

	printf("Variable: %d\n", variable);
	printf("El contenido del puntero es: %d\n", *puntero);
	printf("La direccion de memoria almacenada por el puntero es: %p\n", puntero);
	printf("La direccion de memoria de la variable es: %p\n", &variable);
	printf("La direccion de de memoria del puntero es: %p\n", &puntero);
	printf("El tamanio de la variable es: %d Bytes \n",sizeof(variable));
/*
  En los puntos 2 y 3 se observa la misma direccion de memoria porque es la direccion de la variable y el puntero
  está apuntando a ésa direccion, es por ello que son iguales. Y en el punto 4 se observa la direccion de memoria
  del puntero, no de la variable, por lo que no es igual a las dos anteriores direcciones de memoria.
  */
	return 0;
}
