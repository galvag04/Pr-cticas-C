#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 5
#define COLUMNAS 5

void leer_matriz(int m[FILAS][COLUMNAS]);
void imprimir_matriz(int m[FILAS][COLUMNAS]);

int main(){
	srand(time(NULL));
	int matriz[FILAS][COLUMNAS];
	leer_matriz(matriz);
	imprimir_matriz(matriz);
return 0;
}

void leer_matriz(int m[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			m[i][j] = rand()%13 + 3;
		}
	}
}

void imprimir_matriz(int m[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j ++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}