/*
*Programa: Mostrar la cantidad de vocales que tiene el nombre o palabra
*Fecha: 07 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
void devolvervocales(char nombre[30]);

//Funcion cantidad de vocales
void devolvervocales(char nombre[30]){
	int i, c=0;
	for(i = 0; i<30; i++){
		switch(nombre[i]){
			case 'a': c++;
				break;
			case 'e': c++;
				break;
			case 'i': c++;
				break;
			case 'o': c++;
				break;
			case 'u': c++;
				break;
			case 'A': c++;
				break;
			case 'E': c++;
				break;
			case 'I': c++;
				break;
			case 'O': c++;
				break;
			case 'U': c++;
				break;
		} 
	}
	printf("EL total de las vocales en el nombre es: %d", c);
	getch();
}

//Funcion principal
int main(int argc, char *argv[]) {
	char nombre[30];
	printf("Ingrese un nombre: ");
	gets(nombre);
	devolvervocales(nombre);
	
	return 0;
}
