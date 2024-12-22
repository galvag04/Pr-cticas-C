#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n, num_hilos;

  printf("Introduce el tamano de las matrices:\n");
  scanf("%d", &n);
  printf("Introduce el numero de hilos:\n");
  scanf("%d", &num_hilos);

  omp_set_num_threads(num_hilos);
  srand(time(NULL));

  int *A = (int *)malloc(n * n * sizeof(int));
  int *B = (int *)malloc(n * n * sizeof(int));
  int *C = (int *)malloc(n * n * sizeof(int));

  if (A == NULL || B == NULL || C == NULL) {
    printf("Error al asignar memoria.\n");
    return -1;
  }
  int i, j, k;

#pragma omp parallel for collapse(2)
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      *(A + i * n + j) = rand() % 10 + 1;
      *(B + i * n + j) = rand() % 10 + 1;
    }
  }

  double inicio = omp_get_wtime();
#pragma omp parallel for collapse(3)
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      for (k = 0; k < n; k++) {
        *(C + i * n + i) = (*(A + i * n + k)) * (*(B + k * n + j));
      }
    }
  }
  double fin = omp_get_wtime();
  printf("Tiempo de ejecución con %d hilos y tamaño %dx%d: %f segundos\n",
         num_hilos, n, n, fin - inicio);

  free(A);
  free(B);
  free(C);

  return 0;
}