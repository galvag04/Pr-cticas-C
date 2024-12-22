#include <stdio.h>

void leer_edades(int e[10]);
int edad_maxima(int e[10]);

int main(){

	int edades[10];
	leer_edades(edades);
	int resultado = edad_maxima(edades);
	printf("La edad maxima de las introducidas es: %d", resultado);
	return 0;
}

void leer_edades(int e[10]){
	printf("Introduce 10 edades: \n");
		for(int i = 0; i < 10; i++){
			scanf("%d", &(e[i])); 
		}
}

int edad_maxima(int e[10]){
	int max = e[0];
	for(int i = 0; i < 10; i++){
		if(max < e[i]){
			max = e[i];
		}
	}
	return (max);
}
