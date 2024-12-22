#include <stdio.h>
#define VECT 10 
void leer_vector(int r[VECT]);
void imprimir_vector(int r[VECT]);

int main(){
	int vector[VECT];
	leer_vector(vector);
	imprimir_vector(vector);
return 0;
}

void leer_vector(int r[VECT]){
	printf("Introduce %d numeros para introducirlos en el vector: ", VECT);
	for(int i = 0; i < VECT; i++){
		scanf("%d", &r[i]);	
	}
}

void imprimir_vector(int r[VECT]){
	printf("El vector es:\n");
	for(int i = 0; i < VECT; i++){
		printf("%d", r[i]);
	}
}