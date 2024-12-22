#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int n;
  printf("Introduce el numero de alumnos:\n");
  scanf("%d", &n);
  while (n <= 0) {
    printf("Tiene que ser un valor positivo\n");
    scanf("%d", &n);
  }

  int *v1 = (int *)malloc(n * sizeof(int));
  int *v2 = (int *)malloc(n * sizeof(int));
  int sumador1 = 0;
  int sumador2 = 0;

#pragma omp parallel
  {
#pragma omp for schedule(static, 1) nowait
    for (int i = 0; i < n; i++) {
      v1[i] = rand() % 11;
      v2[i] = rand() % 11;
    }

#pragma omp for reduction(+ : sumador1, sumador2) schedule(static, 1) nowait
    for (int i = 0; i < n; i++) {
      sumador1 += v1[i];
      sumador2 += v2[i];
    }
  }

  int resultado1 = sumador1 / n;
  int resultado2 = sumador2 / n;

  printf("La media de notas del primer parcial es: %d\n", resultado1);
  printf("La media de notas del segundo parcial es: %d\n", resultado2);

  int max1 = v1[0];
  int max2 = v2[0];

#pragma omp parallel for
  for (int i = 0; i < n; i++) {
#pragma omp critical
    {
      if (max1 < v1[i]) {
        max1 = v1[i];
      }
      if (max2 < v2[i]) {
        max2 = v2[i];
      }
    }
  }

  printf("La nota maxima del primer parcial es: %d\n", max1);
  printf("La nota maxima del segundo parcial es: %d\n", max2);

  int min1 = v1[0];
  int min2 = v2[0];

#pragma omp parallel for
  for (int i = 0; i < n; i++) {
#pragma omp critical
    {
      if (min1 > v1[i]) {
        min1 = v1[i];
      }
      if (min2 > v2[i]) {
        min2 = v2[i];
      }
    }
  }

  printf("La nota minima del primer parcial es: %d\n", min1);
  printf("La nota minima del segundo parcial es: %d\n", min2);

  free(v1);
  free(v2);
  return 0;
}

/*Todos mis bucles son independientes, pues sus iteraciones no dependen entre*/