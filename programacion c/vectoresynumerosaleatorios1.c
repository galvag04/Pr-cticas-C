#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define VECT 10

void leer_vector(int r[VECT]);
int suma_elementos_vector(int r[VECT]);
void imprimir_vector(int r[VECT]);

int main(){
    int re[VECT];
    srand(time(NULL));
    leer_vector(re);
    imprimir_vector(re);
    printf("\nLa suma de los elementos del vector es: %d", suma_elementos_vector(re));
return 0;
}

void leer_vector(int r[VECT]){
    for(int i = 0; i < VECT; i++){
        r[i] = rand() % 10 + 1;
    }
}

void imprimir_vector(int r[VECT]){
    printf("Los elementos del vector son: \n");
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
