#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 6
#define COLUMNAS 6

void leer_matriz(int m[FILAS][COLUMNAS]);
void imprimir_matriz(int m[FILAS][COLUMNAS]);
int suma_elementos_matriz(int m[FILAS][COLUMNAS]);

int main(){
	int matriz[FILAS][COLUMNAS];
	srand(time(NULL));
	leer_matriz(matriz);
	printf("La matriz por pantalla es: \n");
	imprimir_matriz(matriz);
	printf("La suma de la matriz es = %d", suma_elementos_matriz(matriz));

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
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			printf("%d ", m[i][j]);
		}
	printf("\n");
	}
}

int suma_elementos_matriz(int m[FILAS][COLUMNAS]){
	int suma = 0;
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			suma += m[i][j];
		}
	}
return(suma);	
}