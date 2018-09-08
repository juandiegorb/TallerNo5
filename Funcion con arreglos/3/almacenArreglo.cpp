/*
*Programa: almacenar nnumeros en un vector y ordenarlos y mostrarlos
*Fecha: 07 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipos
void crear(float vect[10]);
void ordenar(float vect[10]);
void mostrar(float vect[10]);

//Funcion crear
void crear(float vector[10]){
	float numero;
	for(int i = 0; i < 10; i++){
		printf("Ingrese el %d numero:", i+1);
		scanf("%f", &numero);
		vector[i] = numero;
	}
}

//Funcion Ordernar
void ordenar(float vect[10]){
	int k, f;
	for(k = 0; k < 10; k++){
		for(f = 0; f < 9 - k; f++){
			if(vect[f] > vect[f+1]){				
				float aux;
				aux = vect[f];
				vect[f] = vect[f+1];
				vect[f+1]= aux;
			}
		}
	}
}
//Funcion mostrar
void mostrar(float vect[10]){
	printf("Numeros ordenados:\n");
	for(int i = 0; i < 10; i++){
		printf("%.2f\n", vect[i]);
	}
	getch();
}

//Funcion principal
int main(int argc, char *argv[]) {
	float vector[10];
	crear(vector);
	ordenar(vector);
	mostrar(vector);
	
	return 0;
}
