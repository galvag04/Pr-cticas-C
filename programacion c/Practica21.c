#include <stdio.h>
#define FILAS 3
#define COLUMNAS 2
void leer_matriz(int e[FILAS][COLUMNAS]);
float calcular_media(int p[FILAS][COLUMNAS]);
int main(){
	int matriz[FILAS][COLUMNAS];
	leer_matriz(matriz);
	float resultado = calcular_media(matriz);
		printf("La media de los numeros de la matriz es: %f", resultado);
	return 0;
}
void leer_matriz(int e[FILAS][COLUMNAS]){
	printf("Introduce los numeros de la matriz: \n");
		for(int i = 0; i < FILAS; i++){
			for(int j = 0; j < COLUMNAS; j++){
				scanf("%d", &e[i][j]);
			}
		}
}
float calcular_media(int p[FILAS][COLUMNAS]){
	int media;int suma =0;
		for(int i = 0; i < FILAS; i++){
			for(int j = 0; j < COLUMNAS; j++){
				suma += p[i][j];
			}
		}
	media = suma / 6;
	return (media);

}
