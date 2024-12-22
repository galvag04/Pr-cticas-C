#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    return 1;
  }
  int n = atoi(argv[1]);
  if (n < 0) {
    printf("El tamaño del vector debe ser un entero positivo.\n");
    return 1;
  }
  int *vector = (int *)malloc(n * sizeof(int));
  if (vector == NULL) {
    printf("Error, no se pudo asignar memoria");
    return 1;
  }
  printf("#pragma omp parallel for\n");
#pragma omp parallel for
  for (int i = 0; i < n; i++) {
    vector[i] = omp_get_thread_num();
  }
  for (int i = 0; i < n; i++) {
    printf("vector[%d] = %d\n", i, vector[i]);
  }

  printf("#pragma omp parallel for schedule(static)\n");
#pragma omp parallel for schedule(static)
  for (int i = 0; i < n; i++) {
    vector[i] = omp_get_thread_num();
  }
  for (int i = 0; i < n; i++) {
    printf("vector[%d] = %d\n", i, vector[i]);
  }

  printf("#pragma omp parallel for schedule(dynamic)\n");

#pragma omp parallel for schedule(dynamic)
  for (int i = 0; i < n; i++) {
    vector[i] = omp_get_thread_num();
  }
  for (int i = 0; i < n; i++) {
    printf("vector[%d] = %d\n", i, vector[i]);
  }

  printf("#pragma omp parallel for schedule(guided)\n");

#pragma omp parallel for schedule(guided)
  for (int i = 0; i < n; i++) {
    vector[i] = omp_get_thread_num();
  }
  for (int i = 0; i < n; i++) {
    printf("vector[%d] = %d\n", i, vector[i]);
  }

  free(vector);
  return 0;
}