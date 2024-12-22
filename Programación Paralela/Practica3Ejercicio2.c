#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int n;
  double t1 = omp_get_wtime();
  printf("Introduce el tamano de la matriz:\n");
  scanf("%d", &n);
  int *m = (int *)malloc(n * n * sizeof(int));
  if (m == NULL) { // Verificar si malloc falló
    printf("Error al asignar memoria.\n");
    return -1;
  }
  int i, j;
  int suma = 0;

#pragma omp parallel
  {
#pragma omp for collapse(2)
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        *(m + i * n + j) = rand() % 10 + 1;
      }
    }
#pragma omp for reduction(+ : suma) collapse(2)

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        suma += *(m + i * n + j);
      }
    }
  }
  double t2 = omp_get_wtime();

  printf("La suma de los elementos de la matriz es: %d\n", suma);
  printf("Tiempo de ejecucion: %lf segundos\n", t2 - t1);
  free(m);
  return 0;
}
