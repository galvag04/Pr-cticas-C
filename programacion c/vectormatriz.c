#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define FILAS 6
#define COLUMNAS 6
void leer_matriz(int ma[FILAS][COLUMNAS]);
void suma_columnas(int ma[FILAS][COLUMNAS], int r[COLUMNAS]);

int main(){
	int m[FILAS][COLUMNAS], r[COLUMNAS];
	srand(time(NULL));
	leer_matriz(m);
	suma_columnas(m, r);
	
	for(int i = 0; i < FILAS; i++){
		printf("La suma de la columna %d es: %d\n", i, r[i]);
	}

	return 0;
}

void leer_matriz(int ma[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			ma[i][j] = rand() % 11 + 5;
		}

	}
}

void suma_columnas(int ma[FILAS][COLUMNAS], int r[COLUMNAS]){
	for(int j = 0; j < COLUMNAS; j++){
		r[j] = 0;
		for(int i = 0; i < FILAS; i++){
			r[j] = r[j] + ma[i][j];
		}

	}

}
	