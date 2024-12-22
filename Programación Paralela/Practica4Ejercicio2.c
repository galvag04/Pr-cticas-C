#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Error");
    return 1;
  }
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);

  int *matriz = (int *)malloc(n * m * sizeof(int));
  if (matriz == NULL) {
    printf("ERROR. No se pudo asignar memoria.\n");
    return 1;
  }
  omp_set_num_threads(10);
  printf("#pragma omp parallel for schedule(static, 2)\n");
#pragma omp parallel for schedule(static, 2)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matriz[i * m + j] = omp_get_thread_num();
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", matriz[i * m + j]);
    }
    printf("\n");
  }
  printf("#pragma omp parallel for schedule(dynamic, 2)\n");
#pragma omp parallel for schedule(dynamic, 2)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matriz[i * m + j] = omp_get_thread_num();
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", matriz[i * m + j]);
    }
    printf("\n");
  }

  printf("#pragma omp parallel for collapse(2) schedule(static, 2)\n");
#pragma omp parallel for collapse(2) schedule(static, 2)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matriz[i * m + j] = omp_get_thread_num();
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", matriz[i * m + j]);
    }
    printf("\n");
  }

  printf("#pragma omp parallel for collapse(2) schedule(dynamic, 2)\n");
#pragma omp parallel for collapse(2) schedule(dynamic, 2)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matriz[i * m + j] = omp_get_thread_num();
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", matriz[i * m + j]);
    }
    printf("\n");
  }

  free(matriz);
  return 0;
}