#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int n;
  srand(time(NULL));

  printf("Introduce el tamano del vector):\n");
  scanf("%d", &n);

  while (n <= 0) {
    printf("ERROR\n");
    scanf("%d", &n);
  }

  int *p = (int *)malloc(n * sizeof(int));

  double t1 = omp_get_wtime();

  int sumador_reduction = 0;
  int elementos_reduction = 0;

#pragma omp parallel for reduction(+ : sumador_reduction, elementos_reduction)
  for (int i = 0; i < n; i++) {
    p[i] = rand() % 100 + 1;
  }

#pragma omp parallel for reduction(+ : sumador_reduction, elementos_reduction)
  for (int i = 0; i < n; i++) {
    sumador_reduction += p[i];
    elementos_reduction++;
  }

  double t2 = omp_get_wtime();
  printf("Tiempo con reduction: %f segundos\n", t2 - t1);

  t1 = omp_get_wtime();

  int sumador_critical = 0;
  int elementos_critical = 0;

#pragma omp parallel
  {
#pragma omp for
    for (int i = 0; i < n; i++) {
      p[i] = rand() % 100 + 1;
    }

#pragma omp for
    for (int i = 0; i < n; i++) {
#pragma omp critical
      {
        sumador_critical += p[i];
        elementos_critical++;
      }
    }
  }

  t2 = omp_get_wtime();
  printf("Tiempo con critical: %f segundos\n", t2 - t1);

  t1 = omp_get_wtime();

  int sumador_atomic = 0;
  int elementos_atomic = 0;

#pragma omp parallel
  {
#pragma omp for
    for (int i = 0; i < n; i++) {
      p[i] = rand() % 100 + 1;
    }

#pragma omp for
    for (int i = 0; i < n; i++) {
#pragma omp atomic
      sumador_atomic += p[i];
#pragma omp atomic
      elementos_atomic++;
    }
  }

  t2 = omp_get_wtime();
  printf("Tiempo con atomic: %f segundos\n", t2 - t1);
  printf("La media de los elementos del vector es: %d",
         sumador_critical / elementos_critical);

  free(p);

  return 0;
}
