/*
*Programa: Recibe 3 enteros y nos muestra el mayor de ellos.
*Fecha: 07 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
void mayor(int n1, int n2, int n3);

//Ver el mayor de los numero
void mayor(int n1, int n2, int n3){
	if (n1 > n2 || n1 > n3){
		printf("El mayor es: %d", n1);
	}else if(n2 > n3 || n2 > n1){
		printf("El mayor es: %d", n2);
	}else{
		printf("El mayor es: %d", n3);
	}
	getch();
}
//Funcion principal
int main(int argc, char *argv[]) {
	int n1, n2, n3;
	printf("Ingrese el primer numero: ");
	scanf("%d", &n1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &n2);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &n3);
	mayor(n1, n2, n3);	
	return 0;
}

