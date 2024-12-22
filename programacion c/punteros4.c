#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leer_matrices(int *matriz1, int *matriz2, int filas, int columnas);
void imprimir_matrices(int *matriz1, int *matriz2, int filas, int columnas);
void multiplicar_matrices(int *matriz1, int *matriz2, int filas, int columnas, int *matriz3);
void imprimir_matriz_C(int *matriz3, int filas, int columnas);

int main(){
	int f, c;
	srand(time(NULL));
	printf("Introduce el numero de filas y de columnas:\n");
	scanf("%d%d", &f, &c);
	int *m1 = (int *)malloc(f * c * sizeof(int));
	int *m2 = (int *)malloc(f * c * sizeof(int));
	int *m3 = (int *)malloc(f * c * sizeof(int));
	if(m1 == NULL || m2 == NULL || m3 == NULL){
		printf("Error. No se pudo asignar memoria.");
		return 1;
	}
	leer_matrices(m1, m2, f, c);
	imprimir_matrices(m1, m2, f, c);
	multiplicar_matrices(m1, m2, f, c, m3);
	imprimir_matriz_C(m3, f, c);

	free(m1);
	free(m2);
	free(m3);
return 0;
}

void leer_matrices(int *matriz1, int *matriz2, int filas, int columnas){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			*(matriz1 + i * columnas + j) = rand() % 10 + 1;
			*(matriz2 + i * columnas + j) = rand() % 10 + 1;

		}
	}
}

void imprimir_matrices(int *matriz1, int *matriz2, int filas, int columnas){
	printf("La matriz A es:\n");
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("%d ", *(matriz1 + i * columnas + j));
		}
		printf("\n");
	}
	printf("La matriz B es:\n");
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("%d ", *(matriz2 + i * columnas + j));
		}
		printf("\n");
	}
}

void multiplicar_matrices(int *matriz1, int *matriz2, int filas, int columnas, int *matriz3){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			*(matriz3 + i * columnas + j) = (*(matriz1 + i * columnas + j)) * (*(matriz2 + i * columnas + j));
		}
	}
}

void imprimir_matriz_C(int *matriz3, int filas, int columnas){
	printf("La matric C es: \n");
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("%d ", *(matriz3 + i * columnas + j));
		}
		printf("\n");
	}
}