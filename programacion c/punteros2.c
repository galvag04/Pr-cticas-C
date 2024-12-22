#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leer_matriz(int *matriz, int filas, int columnas);
void imprimir_matriz(int *matriz, int filas, int columnas);
int valor_minimo(int *matriz, int filas, int columnas);

int main(){
	int f, c;
	srand(time(NULL));
	printf("introduce el numero de filas y de columnas:\n");
	scanf("%d%d", &f, &c);
	int *m = (int *)malloc(f * c * sizeof(int));
	if(m == NULL){
		printf("Error. No se pudo asignar memoria.\n");
		return 1;
	}
	leer_matriz(m, f, c);
	printf("La matriz generada aleatoriamente es:\n");
	imprimir_matriz(m, f, c);
	printf("El valor minimo de la matriz es: %d", valor_minimo(m, f, c));
free(m);
return 0;

}

void leer_matriz(int *matriz, int filas, int columnas){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			*(matriz + i * columnas + j) = rand() % 99 +1;
		}
	}
}
void imprimir_matriz(int *matriz, int filas, int columnas){
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			printf("%d ", *(matriz + i * columnas + j));
		}
	printf("\n");
	}
}

int valor_minimo(int *matriz, int filas, int columnas){
	int min = *matriz;
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			if(min > *(matriz + i * columnas + j)){
				min = *(matriz + i * columnas + j); // matriz[i*columas+j]
			}
		}
	}
	return(min);
}