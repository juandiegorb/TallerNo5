/*
*Programa: recibir un caracter y ver si es una vocal o no
*Fecha: 07 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
void verificar(char n);

//Funcion ver si es vocal o no
void verificar(char n){
	if(n == 'a' || n == 'A' || n == 'e' || n == 'E'||
	   n == 'i' || n == 'I'	|| n == 'o' || n == 'O'||
	   n == 'u' || n == 'U'){
		printf("Es una vocal");		
	}else{
		printf("No es una vocal");
	}
	getch();
}

//Funcion principal
int main(int argc, char *argv[]) {
	char n;
	printf("Ingrese un caracter: ");
	scanf("%c", &n);
	verificar(n);
	return 0;
}
