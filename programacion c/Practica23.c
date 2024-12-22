#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILAS 10
#define COLUMNAS 10

void leer_matriz(int m[FILAS][COLUMNAS]);
int leer_maximo(int m[FILAS][COLUMNAS]);

int main(){
	int m[FILAS][COLUMNAS];
	int max;

	leer_matriz(m);
	max = leer_maximo(m);

	printf("El maximo valor de la matriz es:\n %d", max);

	return 0;
}

void leer_matriz(int m[FILAS][COLUMNAS]){
	printf("La matriz random es: \n");
	srand(time(NULL));
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			m[i][j] = rand() % 72 + 5;
			printf("%d", m[i][j]);
		}
	}

	printf("\n");
}

int leer_maximo(int m[FILAS][COLUMNAS]){
	int max = m[0][0];
		for(int i = 0; i < FILAS; i++){
			for(int j = 0; j < COLUMNAS; j++){
				if(max < m[i][j]){
					max = m[i][j];
				}
			}
		}
	return(max);
}
