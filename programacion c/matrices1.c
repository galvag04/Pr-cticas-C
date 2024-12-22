#include <stdio.h>
#define FILAS 9
#define COLUMNAS 9
void leer_matriz(int m[FILAS][COLUMNAS]);
void imprimir_matriz(int m[FILAS][COLUMNAS]);

int main(){
	int matriz[FILAS][COLUMNAS];
	leer_matriz(matriz);
	imprimir_matriz(matriz);
return 0;
}

void leer_matriz(int m[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			if(i == j){
				m[i][j] = 1;
			}
			else{
				m[i][j] = 0;
			}
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