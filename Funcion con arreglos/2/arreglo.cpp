/*
*Programa: pedir 2 valores,  y segun los valores ingresados mostrar en pantalla un arreglo de num1 x num2 segun los valores ingresados, que contenga 0 y 1
*Fecha: 07 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

//Prototipo
void arreglo(int v1,int v2);

//Funcion matrix
void arreglo(int v1,int v2){
	// Llenar elementos
	srand(time(NULL));
	int matrix[100][100];
	for(int i = 0; i < v1; i++){
		for(int j = 0; j < v2; j++){
			matrix[i][j] = 0 + rand() % (2 - 0);
			printf("En la posicion [%d][%d] esta: %d\n", i,j, matrix[i][j]);
		}
	}
	//Separador
	printf("\nMatrix: \n");	
	// Mostrar matrix
	for(int i = 0; i < v1; i++){
		for(int j = 0; j < v2; j++){
			printf("%d ", matrix[i][j]);
		}	
		printf("\n");
	}
}

//Funcion principal
int main(int argc, char *argv[]) {
		int v1, v2;
		printf("Ingrese el primer valor: ");
		scanf("%d", &v1);
		printf("Ingrese el segundo valor: ");
		scanf("%d", &v2);
		arreglo(v1,v2);	
		getch();
}



