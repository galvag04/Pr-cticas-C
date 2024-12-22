#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

#define NUM_THREADS 8 
#define MAX_NUMBER 10000

int main() {
    srand(time(NULL));
    int n;
    int ganador = -1;

    printf("Ingrese un número entre 1 y %d: ", MAX_NUMBER);
    scanf("%d", &n);
    while(n < 1 || n > MAX_NUMBER){
        printf("Error. Volver a introducir el numero:\n");
        scanf("%d", &n);
    }

    #pragma omp parallel num_threads(NUM_THREADS) shared(ganador)
    {
        int tid = omp_get_thread_num(); 
        unsigned int seed = time(NULL) + tid;  // Semilla diferente por hilo
        int guess;

        while (ganador == -1) { 
            guess = rand() % MAX_NUMBER + 1;  // Usa rand() si rand_r no está disponible

            #pragma omp critical
            {
                if (ganador == -1 && guess == n) {
                    ganador = tid;
                    printf("El hilo %d ha adivinado el número %d\n", tid, guess);
                }
            }

            if (ganador != -1) {
                break; // Terminar el bucle si un hilo ha ganado
            }
        }
    }

    if (ganador != -1) {
        printf("El hilo ganador es el hilo %d\n", ganador);
    } else {
        printf("Ningún hilo logró adivinar el número.\n");
    }

    return 0;
}
