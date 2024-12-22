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
  int *mA = (int *)malloc(n * n * sizeof(int));
  int *mB = (int *)malloc(n * n * sizeof(int));
  int *mC = (int *)malloc(n * n * sizeof(int));
  int *mD = (int *)malloc(n * n * sizeof(int));
#pragma omp parallel
  {
#pragma omp sections
    {

#pragma omp section
      {
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            *(mA + i * n + j) = rand() % 10 + 1;
          }
        }
      }
#pragma omp section
      {
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            *(mB + i * n + j) = rand() % 10 + 1;
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
            *(mC + i * n + j) = *(mA + i * n + j) * (*(mB + i * n + j));
          }
        }
      }
#pragma omp section
      {
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < n; j++) {
            *(mD + i * n + j) = *(mA + i * n + j) + (*(mB + i * n + j));
          }
        }
      }
    }
  }
  printf("La matriz A es:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", *(mA + i * n + j));
    }
    printf("\n");
  }
  printf("La matriz B es: \n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", *(mB + i * n + j));
    }
    printf("\n");
  }
  printf("El reultado de la matriz suma es:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", *(mD + i * n + j));
    }
    printf("\n");
  }
  printf("El reultado de la matriz multiplicacion es:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", *(mC + i * n + j));
    }
    printf("\n");
  }
  double t2 = omp_get_wtime();
  double resultado = t2 - t1;
  printf("El tiempo empleado es: %lf", resultado);
  return 0;
}

/*Usar punteros (int*) mejora el rendimiento, ya que se maneja una única
asignación de memoria contigua. Sin punteros hay mayor sobrecarga debido a los
saltos de memoria*/

/* La versión con punteros es más rápida que sin punteros porque el acceso a los
elementos de la matriz se más eficiente al ser contiguo en memoria, mientras que
cuando no hay matrices puede haber más retrasos debido a la dispersión de datos
en la memoria. */

/*Usando punteros, el tamaño es más flexible y depende solo de la memoria
 * disponible.*/

/*Usar punteros permite manejar matrices más grandes, ya que se asigna un solo
bloque de memoria contigua, mientras que sin punteros están limitadas por la
fragmentación de memoria.*/