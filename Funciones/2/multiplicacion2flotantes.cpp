/*
*Programa: multiplicacion de dos numeros flotantes
*Fecha: 07 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
float mult(float n1, float n2);

//Funcion que multiplica 2 numeros
float mult(float n1, float n2){
	float r;
	r = n1 * n2;
	return r;
	
}
	
//Funcion principal
int main(int argc, char *argv[]) {
	float n1, n2, resultado;
	printf("Ingrese el primer numero: ");
	scanf("%f", &n1);
	printf("Ingrese el segundo numero: ");
	scanf("%f", &n2);
	resultado = mult(n1, n2);
	printf("El resultado de la multiplicacion es: %.3f", resultado);
	getch();
	return 0;
}

