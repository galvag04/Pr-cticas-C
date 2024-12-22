#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int count_primos = 0;

  printf("Introduce el valor de n: ");
  scanf("%d", &n);

#pragma omp parallel for reduction(+ : count_primos) schedule(static, 1)
  for (int i = 2; i <= n; i++) {
    int es_primo = 1;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        es_primo = 0;
        break;
      }
    }
    if (es_primo) {
      count_primos++;
    }
  }

  printf("La cantidad de numeros primos en el intervalo de 1 a %d es: %d\n", n,
         count_primos);

  return 0;
}
