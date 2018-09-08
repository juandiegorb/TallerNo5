/*
*Programa: ingreso de un numero, mostrar desde 1 hasta el numero ingresado
*Fecha: 07 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
void mostrar(int n);

//Funcion para mostrar los numeros hasta n
void mostrar(int n){
	if(n < 0){
		printf("Error!!! no se permite numeros negativos");
	}else{
		for(int i = 1; i <= n; i++){
			printf("%d\n", i);
		}
	}
	getch();
}

//Funcion principal
int main(int argc, char *argv[]) {
	int n;
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	mostrar(n);
	return 0;
}
