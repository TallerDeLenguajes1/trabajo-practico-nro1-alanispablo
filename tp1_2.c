/*
 ============================================================================
 Name        : tp1_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int cuadradoNumero (int n);
void cuadradoNumeroVoid (int n);
void Mostrar (int *variable);
void Invertir(int a,int b);
void Ordenar(int a,int b);
int main(){
	setvbuf(stdout,NULL,_IONBF,0);

	int n,b,i=0;
	printf("Ingrese un numero entero 'A': \n" );
	scanf("%d",&n);

	printf("Ingrese un numero entero 'B':\n" );
	scanf("%d",&b);

	int c =cuadradoNumero(n);
	printf("El cuadrado del Numero ingresado %d es: %d \n", n , c ); //
	cuadradoNumeroVoid(n);

	int variable = 10;
	Mostrar(&variable);
	Invertir(n,b);
	int arre[6] = {1,3,4,7,10,12};
	while(i<5)
	{
		n = arre[i];
		b = arre[i+1];
		Ordenar(n,b);
		i++;
	}
	return 0;
}
int cuadradoNumero (int n){
	int a = n * n;
	return a;
}
void cuadradoNumeroVoid (int n){
	int a = n * n;
	printf("El cuadrado del Numero ingresado (desde void) %d es: %d \n", n , a );
}
void Mostrar (int *variable){
	printf("El contenido de la variable es: %d \n", *variable);
	printf("La direccion de memoria de la variable (%d) es: %p \n", *variable, variable);
}
void Invertir(int a,int b){
	int c = a;
	a = b;
	b = c;
	printf("El contenido de A ahora es: %d \n", a);
	printf("El contenido de B ahora es: %d \n", b);
}
void Ordenar(int a,int b){
	if (a>b)
	{
		printf("El numero ordenado de mayor a menor del par es: %d - %d \n", b , a );
	}else{
		printf("El numero ordenado de mayor a menor del par es: %d - %d \n", a , b );
	}
}
