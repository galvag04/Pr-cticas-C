#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numero_aleatorio;
    omp_set_num_threads(8);
#pragma omp parallel private(numero_aleatorio)
    {
        int identificador = omp_get_thread_num();
        srand(100 * identificador);
        numero_aleatorio = rand() % 100 + 1;
        printf("Hilo %d: Número aleatorio = %d\n", identificador, numero_aleatorio);
    }

    return 0;
}