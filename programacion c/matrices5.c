#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 3
#define COLUMNAS 5
void leer_matriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS]);
void imprimir_matriz(int m[FILAS][COLUMNAS]);
void producto_matrices(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int m3[FILAS][COLUMNAS]);

int main(){
	int matriz1[FILAS][COLUMNAS], matriz2[FILAS][COLUMNAS], matriz3[FILAS][COLUMNAS];
	srand(time(NULL));
	leer_matriz(matriz1, matriz2);
	printf("Matriz 1:\n");
	imprimir_matriz(matriz1);
	printf("\n");
	printf("Matriz 2:\n");
	imprimir_matriz(matriz2);
	producto_matrices(matriz1, matriz2, matriz3);
	printf("Resultado de la tercera matriz:\n");
	imprimir_matriz(matriz3);
return 0;
}

void leer_matriz(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			m1[i][j] = rand() % 5 + 1;
			m2[i][j] = rand() % 5 + 1;
		}
	}
}

void imprimir_matriz(int m[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			printf("%d ", m[i][j]);

		}
		printf("\n");
	}
}


void producto_matrices(int m1[FILAS][COLUMNAS], int m2[FILAS][COLUMNAS], int m3[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			m3[i][j] = (m1[i][j]) * (m2[i][j]);
		}
		printf("\n");
	}
}