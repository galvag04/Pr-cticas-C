#include <stdio.h>
#include <stdlib.h>
int valor_maximo(int n, int *puntero);
int main(){
	int cant;
	printf("Introduce el numero de enteros: ");
	scanf("%d", &cant);
	while(cant <= 0){
		printf("Introduce el numero de enteros: ");
		scanf("%d", &cant);
	}
	int *p = (int *)malloc(cant * sizeof(int));
	if(p == NULL){
		printf("Error. No se pudo asignar memoria.\n");
		return 1;
	}
	if(cant == 1){
		printf("Introduce %d entero: ", cant);
		for(int i = 0; i < cant; i++){
			scanf("%d", &p[i]);
		}
		printf("El entero introducido es: ");
		for(int i = 0; i < cant; i++){
			printf("%d", p[i]);
		}
	}
	else{
		printf("Introduce %d enteros: ", cant);
		for(int i = 0; i < cant; i++){
		scanf("%d", &p[i]);
		}
		printf("Los enteros introducidos son:\n");
		for(int i = 0; i < cant; i++){
			printf("%d ", p[i]);
		}
	}
	printf("\nEl valor maximo es: %d", valor_maximo(cant, p));

	free(p);
	return 0;
}

int valor_maximo(int n, int *puntero){
	int max = puntero[0];
	for(int i = 0; i < n; i++){
		if(max < puntero[i]){
			max = puntero[i];
		}
	}
	return(max);
}