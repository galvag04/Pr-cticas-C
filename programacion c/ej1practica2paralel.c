#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  srand(time(NULL));
  double t1 = omp_get_wtime();
  int n;
  printf("Introduce el numero de filas y columnas de las matrices (matrices "
         "cuadradas):\n");
  scanf("%d", &n);
  int mA[n][n];
  int mB[n][n];
  int mC[n][n];
  int mD[n][n];
#pragma omp parallel
  {
#pragma omp sections
    {

#pragma omp section
      {
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            mA[i][j] = rand() % 10 + 1;
          }
        }
      }
#pragma omp section
      {
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            mB[i][j] = rand() % 10 + 1;
          }
        }
      }
    }
#pragma omp sections
    {
#pragma omp section
      {
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            mC[i][j] = mA[i][j] * mB[i][j];
          }
        }
      }
#pragma omp section
      {
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            mD[i][j] = mA[i][j] + mB[i][j];
          }
        }
      }
    }
  }
  printf("La matriz A es:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mA[i][j]);
    }
    printf("\n");
  }
  printf("La matriz B es: \n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mB[i][j]);
    }
    printf("\n");
  }
  printf("El reultado de la matriz suma es:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mD[i][j]);
    }
    printf("\n");
  }
  printf("El reultado de la matriz multiplicacion es:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mC[i][j]);
    }
    printf("\n");
  }
  double t2 = omp_get_wtime();
  double resultado = t2 - t1;
  printf("El tiempo empleado es: %lf", resultado);
  return 0;
}