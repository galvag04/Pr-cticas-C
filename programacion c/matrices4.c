#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 3
#define COLUMNAS 6

void leer_matriz(int m[FILAS][COLUMNAS]);
void imprimir_matriz(int m[FILAS][COLUMNAS]);
void suma_columnas(int m[FILAS][COLUMNAS], int r[COLUMNAS]);

int main(){
	int matriz[FILAS][COLUMNAS];
	int vector[COLUMNAS];
	srand(time(NULL));
	leer_matriz(matriz);
	imprimir_matriz(matriz);
	suma_columnas(matriz, vector);
	printf("El resultado de la suma de cada columna es:\n");
	for(int j = 0; j < COLUMNAS; j++){
		printf("Columna %d: %d\n", j + 1, vector[j]);
	}
return 0;
}

void leer_matriz(int m[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			m[i][j] = rand() % 10 + 1;
		}
	}
}

void imprimir_matriz(int m[FILAS][COLUMNAS]){
	printf("La matriz por pantalla es:\n");
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

void suma_columnas(int m[FILAS][COLUMNAS], int r[COLUMNAS]){
	for(int j = 0; j < COLUMNAS; j++){
		r[j] = 0;
	}		
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			r[j] += m[i][j];
		}
	}
}