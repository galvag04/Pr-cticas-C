#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void init_matrix(int *m, int f, int c);
void imprimir_matriz(int *m, int f, int c);
int compute_solution(int *m, int f, int c);

int main(){
	int filas, columnas;
	srand(time(NULL));
	scanf("%d%d", &filas, &columnas);
	int *matriz = (int*)malloc(filas * columnas * sizeof(int));
	if(matriz == NULL){
		printf("Error. No se pudo asignar memoria");
		return 1;
	}
	init_matrix(matriz, filas, columnas);
	imprimir_matriz(matriz, filas, columnas);
	printf("%d", compute_solution(matriz, filas, columnas));

free(matriz);
return 0;
}

void init_matrix(int *m, int f, int c){
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			*(m + i * c + j) = rand() % 11 + 10;
		}
	}
}
void imprimir_matriz(int *m, int f, int c){
	printf("La matriz es:\n");
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			printf("%d ", *(m + i * c + j));
		}
		printf("\n");
	}
}

int compute_solution(int *m, int f, int c){
	int mult = 1;
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			if((*(m + i * c + j) % 4 == 0) && ((j + 1)% 2 == 0)){
				mult *= (*(m + i * c + j));
			}
		}
	}
	return(mult);
}