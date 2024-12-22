#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define VECT 10

void leer_vector(int r[VECT]);
void imprimir_vector(int r[VECT]);
int suma_elementos_vector(int r[VECT])

int main(){
	int vector[VECT];
	srand(time(NULL));
	leer_vector(vector);
	imprimir_vector(vector);
	printf("La suma de los elementos del vector es: %d", suma_elementos_vector(vector));
return 0;
}

void leer_vector(int r[VECT]){
	int i = 0;
	while(i < VECT){
		r[i] = rand()%9 + 1;
		i++;
	}
}

void imprimir_vector(int r[VECT]){
	printf("El vector generado con numeros aleatorios es:\n");
		for(int i = 0; i < VECT; i++){
			printf("%d ", r[i]);
		}
}

int suma_elementos_vector(int r[VECT]){
	int suma = 0;
	for(int i = 0; i < VECT; i++){
		suma = suma + r[i];
	}
return (suma);
}