/*
*Programa: mostrar los segundos enviados convertidos en horas minutos y segundos
*Fecha: 07 de Septiembre el 2018
*Creador: Juan Diego Rios Ballesteros
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo
void tiempo(int segtotal, int &hor, int &min, int &seg);

//Funcion ver si es vocal o no
void tiempo(int segtotal, int &hor, int &min, int &seg){
	hor = (segtotal / 3600);
	min = ((segtotal - hor * 3600)/ 60);
	seg = segtotal - (hor * 3600 + min * 60);		
}

//Funcion principal
int main(int argc, char *argv[]) {
	int segundos, hor = 0, min = 0, seg = 0;
	printf("Ingrese los segundos que quiere convertir: ");
	scanf("%d", &segundos);
	tiempo(segundos, hor, min, seg);
	printf("Los %d segundos equivalen a:\n%d Horas %d Minutos %d Segundos", segundos, hor, min, seg);
	getch();
	return 0;
}
