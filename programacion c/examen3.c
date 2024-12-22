#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_matrix(int *m, int a, int b);
int compute_solution(int *m, int a, int b);
int procesa_cadena(char l, char cadena_1[], char cadena_2[]);

int main(){
    srand(time(NULL));
    
    int A, B;

    printf("Introduce a y b:\n");
    scanf("%d%d", &A, &B);
    getchar();

    char letra;

    printf("Introduce una letra l:\n");
    scanf("%c", &letra);
    getchar();

    int *matriz = (int*)malloc(A * B * sizeof(int));
    if(matriz == NULL){
        printf("Error. No se pudo asignar memoria.");
        return 1;
    }

    char cadena[100];
    printf("Introduce la cadena:\n");
    fgets(cadena, sizeof(cadena), stdin);

    char cadena_procesada[100];

    init_matrix(matriz, A, B);
    printf("El resultado es: %d\n", compute_solution(matriz, A, B));
    
    int posicion = procesa_cadena(letra, cadena, cadena_procesada);
    printf("La segunda l se encuentra en la posición %d\n", posicion);
    printf("La cadena invertida es: %s\n", cadena_procesada);

    free(matriz);

    return 0;
}

void init_matrix(int *m, int a, int b){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            *(m + i * b + j) = rand() % 21 - 10; // Entre -10 y 10
        }
    }
}

int compute_solution(int *m, int a, int b){
    int suma = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(i == j){
                suma += *(m + i * b + j);
            }
        }
    }
    return suma;
}

int procesa_cadena(char l, char cadena_1[], char cadena_2[]){
    int suma = 0;
    int j = 0;
    int zuma = 0;
    int u = 0;
    
    for(int i = 0; cadena_1[i] != '\0'; i++){
        if(cadena_1[i] == l){
            suma += 1;
        }
        if(suma == 2){
            return i; // Devuelve la posición
        }
    }
    
    for(int i = 0; cadena_1[i] != '\0'; i++){
        if(cadena_1[i] != ' '){
            cadena_1[j] = cadena_1[i];
            j++;
            zuma += 1;
        }
    }
    cadena_2[zuma] = '\0'; // Final de cadena para cadena_2
    
    int w = zuma - 1;
    for(int i = 0; i < zuma; i++){
        cadena_2[w] = cadena_1[i];
        w--;
    }
    return -1; // Si no se encuentra la segunda aparición
}
