#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void leer_matriz(int *matriz, int filas, int columnas);
void imprimir_matriz(int *matriz, int filas, int columnas);
void minimo_filas(int *matriz, int *vector, int filas, int columnas);

int main(){
	int f, c;
	srand(time(NULL));
	printf("Introduce el numero de filas y de columnas: \n");
	scanf("%d%d", &f, &c);
	int *m = (int *)malloc(f * c * sizeof(int));
	int *v = (int *)malloc(f * sizeof(int));
	if(m == NULL || v == NULL){
		printf("Error. No se pudo asignar memoria.\n");
		return 1;
	}
	leer_matriz(m, f, c);
	imprimir_matriz(m, f, c);
	minimo_filas(m, v, f, c);
free(m);
return 0;
}

void leer_matriz(int *matriz, int filas, int columnas){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			*(matriz + i * columnas + j) = rand() % 21 - 10;
		}
	}
}

void imprimir_matriz(int *matriz, int filas, int columnas){
	printf("La matriz generada aleatoriamente es:\n");
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("%d ", *(matriz + i *columnas + j));
		}
		printf("\n");
	}
}

void minimo_filas(int *matriz, int *vector, int filas, int columnas){
	for(int i = 0; i < filas; i++){
		int min = *(matriz + i* columnas);
		for(int j = 0; j < columnas; j++){
			if(min > *(matriz + i * columnas + j)){
				min = *(matriz + i * columnas + j);
			}
		}
		vector[i] = min;
		printf("El valor minimo de la fila %d, es %d\n", i + 1, vector[i]);
	}
}