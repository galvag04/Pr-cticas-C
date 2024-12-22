#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  printf("Introduce un numero por teclado (entre el 1 y el 10000):\n");
  scanf("%d", &num);

  while (num < 1 || num > 10000) {
    printf("Error. Introduce un número válido entre 1 y 10000:\n");
    scanf("%d", &num);
  }

  int ganador = 0;

#pragma omp parallel shared(ganador)
  {
    int identificador = omp_get_thread_num();

    srand(1000 * identificador + 1);

    while (ganador == 0) {
      int numero_aleatorio = rand() % 10000 + 1;

      if (num == numero_aleatorio) {
#pragma omp critical
        {
          if (ganador == 0) {
            printf("El numero %d lo ha adivinado el hilo %d\n", num,
                   identificador);
            ganador = 1;
          }
        }
      }
    }
  }

  return 0;
}
